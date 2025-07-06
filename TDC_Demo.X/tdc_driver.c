/*--------------------------------------------------------------
 *  tdc_driver ? read a 24bit TDC delay value
 *  See <GH link> for mor information
 *------------------------------------------------------------*/
#include "tdc_driver.h"
#include <inttypes.h>

// coarse-conversion constants
#define COARSE_U_MUL   11971u // = 31.125 / 0.125 * 48
#define COARSE_U_DIV      48u // avoid 32-bit overflow
#define LATCH_DELAY        2u

#define TIMEOUT_US      1000u
#define TIMEOUT TIMEOUT_US * 32u

#define U24_LSB_NS    0.125f

#define FINE_BIAS_U      60u
// fine offsets, stored as (ps / 125) ? 60
static const uint8_t fine_u8[25] = {
//   B0   B1   B2   B3   B4 
    222,   0,   0,   0, 254,   // A0
    184, 157,   0,   0,   0,   // A1
      0, 132, 102,   0,   0,   // A2
      0,   0,  82,  57,   0,   // A3
      0,   0,   0,  34,  16    // A4
};

// convert packed value to picoseconds
inline uint32_t tdc_u24_to_ps(uint24_t code)
{
    return (uint32_t)code * 125u;
}

// convert packed value to nanoseconds (float)
inline float tdc_u24_to_ns(uint24_t code)
{
    return (float)code * U24_LSB_NS;
}


uint24_t tdc_read(void)
{
    TMR1_Write(0u); // reset coarse timer
    TRIG_OUT_SetHigh(); // START
    while (!TRIG_IN_GetValue()){}
    __delay_us(2); // latch input

    uint16_t coarse_ticks = TMR1_Read();

    // pop-count lower nibble (B group)
    uint8_t b = CPPS0_GetValue() + CPPS1_GetValue()
              + CPPS2_GetValue() + CPPS3_GetValue();

    // pop-count upper nibble (A group)
    uint8_t a = CPPS4_GetValue() + CPPS5_GetValue()
              + CPPS6_GetValue() + CPPS7_GetValue();
    
    uint8_t fine_index = (uint8_t)(a * 5u + b);

    // coarse part in 0.125-ns units
    uint32_t ret = ((uint32_t)(coarse_ticks - LATCH_DELAY) *
                         COARSE_U_MUL) / COARSE_U_DIV;

#ifdef TDC_DBG
    printf("A %"PRIu8" B %" PRIu8 " C %"PRIu16" ", a, b, coarse_ticks);
#endif
    
    // add fine offset
    ret += fine_u8[fine_index] + FINE_BIAS_U;

    TRIG_OUT_SetLow();
    
    return (uint24_t) ret;
}

