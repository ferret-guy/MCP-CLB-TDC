/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA1 aliases
#define TRIG_IN_TRIS                 TRISAbits.TRISA1
#define TRIG_IN_LAT                  LATAbits.LATA1
#define TRIG_IN_PORT                 PORTAbits.RA1
#define TRIG_IN_WPU                  WPUAbits.WPUA1
#define TRIG_IN_OD                   ODCONAbits.ODCA1
#define TRIG_IN_ANS                  ANSELAbits.ANSA1
#define TRIG_IN_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define TRIG_IN_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define TRIG_IN_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define TRIG_IN_GetValue()           PORTAbits.RA1
#define TRIG_IN_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define TRIG_IN_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define TRIG_IN_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define TRIG_IN_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define TRIG_IN_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define TRIG_IN_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define TRIG_IN_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define TRIG_IN_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define TRIG_OUT_TRIS                 TRISAbits.TRISA2
#define TRIG_OUT_LAT                  LATAbits.LATA2
#define TRIG_OUT_PORT                 PORTAbits.RA2
#define TRIG_OUT_WPU                  WPUAbits.WPUA2
#define TRIG_OUT_OD                   ODCONAbits.ODCA2
#define TRIG_OUT_ANS                  ANSELAbits.ANSA2
#define TRIG_OUT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define TRIG_OUT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define TRIG_OUT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define TRIG_OUT_GetValue()           PORTAbits.RA2
#define TRIG_OUT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define TRIG_OUT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define TRIG_OUT_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define TRIG_OUT_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define TRIG_OUT_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define TRIG_OUT_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define TRIG_OUT_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define TRIG_OUT_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA4 aliases
#define CPPS7_TRIS                 TRISAbits.TRISA4
#define CPPS7_LAT                  LATAbits.LATA4
#define CPPS7_PORT                 PORTAbits.RA4
#define CPPS7_WPU                  WPUAbits.WPUA4
#define CPPS7_OD                   ODCONAbits.ODCA4
#define CPPS7_ANS                  ANSELAbits.ANSA4
#define CPPS7_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define CPPS7_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define CPPS7_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define CPPS7_GetValue()           PORTAbits.RA4
#define CPPS7_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define CPPS7_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define CPPS7_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define CPPS7_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define CPPS7_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define CPPS7_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define CPPS7_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define CPPS7_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
// get/set IO_RB4 aliases
#define CPPS2_TRIS                 TRISBbits.TRISB4
#define CPPS2_LAT                  LATBbits.LATB4
#define CPPS2_PORT                 PORTBbits.RB4
#define CPPS2_WPU                  WPUBbits.WPUB4
#define CPPS2_OD                   ODCONBbits.ODCB4
#define CPPS2_ANS                  ANSELBbits.ANSB4
#define CPPS2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define CPPS2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define CPPS2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define CPPS2_GetValue()           PORTBbits.RB4
#define CPPS2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define CPPS2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define CPPS2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define CPPS2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define CPPS2_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define CPPS2_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define CPPS2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define CPPS2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define CPPS3_TRIS                 TRISBbits.TRISB5
#define CPPS3_LAT                  LATBbits.LATB5
#define CPPS3_PORT                 PORTBbits.RB5
#define CPPS3_WPU                  WPUBbits.WPUB5
#define CPPS3_OD                   ODCONBbits.ODCB5
#define CPPS3_ANS                  ANSELBbits.ANSB5
#define CPPS3_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define CPPS3_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define CPPS3_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define CPPS3_GetValue()           PORTBbits.RB5
#define CPPS3_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define CPPS3_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define CPPS3_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define CPPS3_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define CPPS3_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define CPPS3_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define CPPS3_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define CPPS3_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define CPPS4_TRIS                 TRISBbits.TRISB6
#define CPPS4_LAT                  LATBbits.LATB6
#define CPPS4_PORT                 PORTBbits.RB6
#define CPPS4_WPU                  WPUBbits.WPUB6
#define CPPS4_OD                   ODCONBbits.ODCB6
#define CPPS4_ANS                  ANSELBbits.ANSB6
#define CPPS4_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define CPPS4_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define CPPS4_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define CPPS4_GetValue()           PORTBbits.RB6
#define CPPS4_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define CPPS4_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define CPPS4_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define CPPS4_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define CPPS4_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define CPPS4_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define CPPS4_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define CPPS4_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define CPPS5_TRIS                 TRISBbits.TRISB7
#define CPPS5_LAT                  LATBbits.LATB7
#define CPPS5_PORT                 PORTBbits.RB7
#define CPPS5_WPU                  WPUBbits.WPUB7
#define CPPS5_OD                   ODCONBbits.ODCB7
#define CPPS5_ANS                  ANSELBbits.ANSB7
#define CPPS5_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define CPPS5_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define CPPS5_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define CPPS5_GetValue()           PORTBbits.RB7
#define CPPS5_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define CPPS5_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define CPPS5_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define CPPS5_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define CPPS5_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define CPPS5_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define CPPS5_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define CPPS5_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC1 aliases
#define CPPS6_TRIS                 TRISCbits.TRISC1
#define CPPS6_LAT                  LATCbits.LATC1
#define CPPS6_PORT                 PORTCbits.RC1
#define CPPS6_WPU                  WPUCbits.WPUC1
#define CPPS6_OD                   ODCONCbits.ODCC1
#define CPPS6_ANS                  ANSELCbits.ANSC1
#define CPPS6_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define CPPS6_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define CPPS6_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define CPPS6_GetValue()           PORTCbits.RC1
#define CPPS6_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define CPPS6_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define CPPS6_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define CPPS6_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define CPPS6_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define CPPS6_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define CPPS6_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define CPPS6_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define CPPS0_TRIS                 TRISCbits.TRISC2
#define CPPS0_LAT                  LATCbits.LATC2
#define CPPS0_PORT                 PORTCbits.RC2
#define CPPS0_WPU                  WPUCbits.WPUC2
#define CPPS0_OD                   ODCONCbits.ODCC2
#define CPPS0_ANS                  ANSELCbits.ANSC2
#define CPPS0_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define CPPS0_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define CPPS0_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define CPPS0_GetValue()           PORTCbits.RC2
#define CPPS0_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define CPPS0_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define CPPS0_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define CPPS0_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define CPPS0_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define CPPS0_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define CPPS0_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define CPPS0_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
// get/set IO_RC6 aliases
#define CPPS1_TRIS                 TRISCbits.TRISC6
#define CPPS1_LAT                  LATCbits.LATC6
#define CPPS1_PORT                 PORTCbits.RC6
#define CPPS1_WPU                  WPUCbits.WPUC6
#define CPPS1_OD                   ODCONCbits.ODCC6
#define CPPS1_ANS                  ANSELCbits.ANSC6
#define CPPS1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define CPPS1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define CPPS1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define CPPS1_GetValue()           PORTCbits.RC6
#define CPPS1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define CPPS1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define CPPS1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define CPPS1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define CPPS1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define CPPS1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define CPPS1_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define CPPS1_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/