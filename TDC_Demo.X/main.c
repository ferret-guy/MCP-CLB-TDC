 /*
 * Example main for the TDC
 * 
 * @file main.c
 * 
 * @brief This is an example of how to use the tdc_driver to make TDC measurements.
 *
  * See 
*/

#include "mcc_generated_files/system/system.h"
#include "tdc_driver.h"
#include <inttypes.h>

int main(void)
{
    SYSTEM_Initialize();
    
    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 


    while(1)
    {
        printf("TDC %" PRIu32 " ps\r\n", tdc_u24_to_ps(tdc_read()));
    }    
}
