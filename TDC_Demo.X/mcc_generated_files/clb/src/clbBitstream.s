/**
 *  @file clbBitsream.s
 *
 *  @brief CLB bitstream data for the TDC core
     DO NOT allow MCC to overwrite
 *
 **/
#if !(defined(_16F13113) || defined(_16F13114) || defined(_16F13115) || defined(_16F13123) || defined(_16F13124) || defined(_16F13125) || defined(_16F13143) || defined(_16F13144) || defined(_16F13145))
    #error This module is only suitable for PIC16F13145 family devices
#endif

#ifdef CLB_CONFIG_ADDR
    psect clb_config,global,class=STRCODE,abs,ovrld,delta=2,noexec,split=0,merge=0,keep
#else
    psect clb_config,global,class=STRCODE,delta=2,noexec,split=0,merge=0,keep
#endif

global _start_clb_config

psect   clb_config
#ifdef CLB_CONFIG_ADDR
    ORG CLB_CONFIG_ADDR
#endif

_start_clb_config:
    dw  0x3018;
    dw  0x0140;
    dw  0x14BC;
    dw  0x0346;
    dw  0x310A;
    dw  0x0000;
    dw  0x3C1E;
    dw  0x2008;
    dw  0x3078;
    dw  0x0940;
    dw  0x14BC;
    dw  0x0182;
    dw  0x300C;
    dw  0x0185;
    dw  0x2818;
    dw  0x2140;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x001E;
    dw  0x01E6;
    dw  0x2838;
    dw  0x0548;
    dw  0x180A;
    dw  0x0142;
    dw  0x300C;
    dw  0x1743;
    dw  0x2814;
    dw  0x0140;
    dw  0x3018;
    dw  0x1580;
    dw  0x180A;
    dw  0x0745;
    dw  0x300C;
    dw  0x1745;
    dw  0x30D4;
    dw  0x2180;
    dw  0x0000;
    dw  0x0000;
    dw  0x000A;
    dw  0x0B40;
    dw  0x280A;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0180;
    dw  0x30D8;
    dw  0x0180;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;
    dw  0x000A;
    dw  0x0340;
    dw  0x280A;
    dw  0x0180;
    dw  0x3138;
    dw  0x0180;
    dw  0x0000;
    dw  0x01E0;
    dw  0x1E20;
    dw  0x0000;
    dw  0x3C0F;
    dw  0x0600;
    dw  0x001E;
    dw  0x01E4;
    dw  0x0000;
    dw  0x01E0;
    dw  0x1E5C;
    dw  0x0181;
    dw  0x300C;
    dw  0x0100;
    dw  0x2010;
    dw  0x0100;
    dw  0x2000;
    dw  0x0100;
    dw  0x1008;
    dw  0x0100;
    dw  0x2008;
    dw  0x0001;
    dw  0x2010;
    dw  0x0100;
    dw  0x0000;
    dw  0x0C00;
    dw  0x00D0;
    dw  0x0000;
    dw  0x0000;
    dw  0x0000;