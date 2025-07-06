/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.0.0
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

#include "../pins.h"


void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0x27;
    TRISB = 0x0;
    TRISC = 0xA9;

    /**
    ANSELx registers
    */
    ANSELA = 0x21;
    ANSELB = 0x0;
    ANSELC = 0x89;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
  
    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0x21;
    SLRCONB = 0x0;
    SLRCONC = 0x89;
    /**
    INLVLx registers
    */
    INLVLA = 0x29;
    INLVLB = 0x0;
    INLVLC = 0x89;

    /**
    PPS registers
    */
    CLBIN0PPS = 0x1; //RA1->CLB1:CLBIN0;
    CLBIN1PPS = 0x2; //RA2->CLB1:CLBIN1;
    RX1PPS = 0x15; //RC5->EUSART1:RX1;
    RC2PPS = 0x24;  //RC2->CLB1:CLBPPSOUT0;
    RC6PPS = 0x25;  //RC6->CLB1:CLBPPSOUT1;
    RB4PPS = 0x26;  //RB4->CLB1:CLBPPSOUT2;
    RB5PPS = 0x27;  //RB5->CLB1:CLBPPSOUT3;
    RB6PPS = 0x28;  //RB6->CLB1:CLBPPSOUT4;
    RB7PPS = 0x29;  //RB7->CLB1:CLBPPSOUT5;
    RC1PPS = 0x2A;  //RC1->CLB1:CLBPPSOUT6;
    RA4PPS = 0x2B;  //RA4->CLB1:CLBPPSOUT7;
    RC4PPS = 0x13;  //RC4->EUSART1:TX1;

    /**
    APFCON registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x0;
    IOCCF = 0x0;
    
    // Not properly set by MCC
    TRIG_OUT_SetDigitalOutput();
}
  
void PIN_MANAGER_IOC(void)
{
}
/**
 End of File
*/