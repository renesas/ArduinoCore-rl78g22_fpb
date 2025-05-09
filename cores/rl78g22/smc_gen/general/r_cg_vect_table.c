/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2020 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_cg_vect_table.c
* Version      : 1.0.0
* Device(s)    : R7F102GGExFB
* Description  : None
* Creation Date: 2022/11/04
***********************************************************************************************************************/

#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"

extern void PowerON_Reset (void);

const unsigned char Option_Bytes[]  __attribute__ ((section (".option_bytes"))) = {
    0xEFU, 0xFFU, 0xE8U, 0x04U
};

const unsigned char Security_Id[]  __attribute__ ((section (".security_id"))) = {
    0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U
};

#define VEC          __attribute__ ((section (".vec")))
const void __near *HardwareVectors[] VEC = {
    // Address 0x0
    PowerON_Reset,
    // Secure for Debugging
    (void*)0xFFFF
};

#define VECT_SECT          __attribute__ ((section (".vects")))
const void __near *Vectors[] VECT_SECT = {
/*
 * INT_WDTI (0x4)
 */
INT_WDTI,

/*
 * INT_LVI (0x6)
 */
    INT_LVI,

/*
 * INT_P0 (0x8)
 */
//    INT_P0,
    r_Config_INTC_intp0_interrupt,
/*
 * INT_P1 (0xA)
 */
//    INT_P1,
    r_Config_INTC_intp1_interrupt,

/*
 * INT_P2 (0xC)
 */
//    INT_P2,
    r_Config_INTC_intp2_interrupt,
    
/*
 * INT_P3 (0xE)
 */
//    INT_P3,
    r_Config_INTC_intp3_interrupt,

/*
 * INT_P4 (0x10)
 */
//    INT_P4,
    r_Config_INTC_intp4_interrupt,

/*
 * INT_P5 (0x12)
 */
//    INT_P5,
    r_Config_INTC_intp5_interrupt,

/*
 * INT_CSI20/INT_IIC20/INT_ST2 (0x14)
 */
//    INT_ST2,
#if defined(CSI_CHANNEL4) | (UART2_CHANNEL==2)
    r_Config_CSI20_UART2_interrupt_send,
#else
    INT_ST2,
#endif

/*
 * INT_CSI21/INT_IIC21/INT_SR2 (0x16)
 */
//    INT_SR2,
#if defined(CSI_CHANNEL5)
    INT_SR2,
#else
    #if (UART2_CHANNEL==2)
        r_Config_UART2_interrupt_receive,
    #else
        INT_SR2,
    #endif
#endif
/*
 * INT_SRE2/INT_TM11H (0x18)
 */
#if (UART2_CHANNEL==2)
    r_Config_UART2_interrupt_error,
#else
    INT_SRE2,
#endif

/*
 * Padding (0x1A)
 */
    (void*)0xFFFF,
    
/*
 * INT_SMSE (0x1C)
 */
    INT_SMSE,

/*
 * INT_CSI00/INT_IIC00/INT_ST0 (0x1E)
 */
//    INT_ST0,
#if defined(UART_CHANNEL) & (UART_CHANNEL==0)
    r_Config_UART0_interrupt_send,
#else
    INT_ST0,
#endif

/*
 * INT_TM00 (0x20)
 */
	r_Config_TAU0_0_PWM_interrupt,

/*
 * INT_SRE0/INT_TM01H (0x22)
 */
//    INT_TM01H,
#if defined(UART_CHANNEL) & (UART_CHANNEL==0)
    r_Config_UART0_interrupt_error,
#else
    INT_TM01H,
#endif

/*
 * INT_ST1 (0x24)
 */
//    INT_ST1,
#if ( UART1_CHANNEL == 1 )
    r_Config_UART1_interrupt_send,
#else
    INT_ST1,
#endif

/*
 * INT_CSI11/INT_IIC11/INT_SR1 (0x26)
 */
//    r_Config_CSI11_interrupt,
#if defined(CSI_CHANNEL3) | (defined(UART1_CHANNEL) & UART1_CHANNEL == 1 )
     r_Config_CSI11_UART1_interrupt_switching,
 #else
    INT_SR1,
#endif

/*
 * INT_SRE1/INT_TM03H (0x28)
 */
//    INT_TM03H,
#if ( UART1_CHANNEL == 1 )
    r_Config_UART1_interrupt_error,
#else
    INT_TM03H,
#endif

/*
 * INT_IICA0 (0x2A)
 */
    r_Config_IICA0_interrupt,

/*
 * INT_CSI01/INT_IIC01/INT_SR0 (0x2C)
 */
//    INT_SR0,


#if defined(CSI_CHANNEL1)
    INT_CSI01,
#else
#if defined(IIC_CHANNEL1) && (IIC_CHANNEL1 == 1) || defined(UART_CHANNEL) && (UART_CHANNEL == 0)
	r_Config_IIC01_UART0_interrupt_switching,
    #else
        INT_SR0,
    #endif
#endif

/*
 * INT_TM01 (0x2E)
 */
    INT_TM01,

/*
 * INT_TM02 (0x30)
 */
	INT_TM02,

/*
 * INT_TM03 (0x32)
 */
	INT_TM03,

/*
 * INT_AD (0x34)
 */
    r_Config_ADC_interrupt,

/*
 * INT_RTC (0x36)
 */
//    INT_RTC,
    r_Config_RTC_interrupt,

/*
 * INT_ITL (0x38)
 */
    r_itl_interrupt,

/*
 * INT_KR (0x3A)
 */
    INT_KR,

/*
 * Padding (0x3C)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x3E)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x40)
 */
    (void*)0xFFFF,
    

/*
 * INT_TM04 (0x42)
 */
    r_Config_TAU0_4_Servo_interrupt,

/*
 * INT_TM05 (0x44)
 */
    r_Config_TAU0_5_Servo_interrupt,

/*
 * INT_TM06 (0x46)
 */
	r_Config_TAU0_6_Micros_interrupt,

/*
 * INT_TM07 (0x48)
 */
	INT_TM07,

/*
 * INT_P6 (0x4A)
 */
//    INT_P6,
    r_Config_INTC_intp6_interrupt,

/*
 * Padding (0x4C)
 */
    (void*)0xFFFF,
    

/*
 * INT_P8 (0x4E)
 */
    INT_P8,

/*
 * INT_P9 (0x50)
 */
    INT_P9,

/*
 * INT_FL (0x52)
 */
    INT_FL,

/*
 * Padding (0x54)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x56)
 */
    (void*)0xFFFF,
    

/*
 * INT_URE0 (0x58)
 */
    INT_URE0,

/*
 * Padding (0x5A)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x5C)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x5E)
 */
    (void*)0xFFFF,
    

/*
 * INT_CTSUWR (0x60)
 */
    INT_CTSUWR,

/*
 * Padding (0x62)
 */
    (void*)0xFFFF,
    

/*
 * INT_CTSURD (0x64)
 */
    INT_CTSURD,

/*
 * INT_CTSUFN (0x66)
 */
    INT_CTSUFN,

/*
 * Padding (0x68)
 */
    (void*)0xFFFF,
    

/*
 * INT_UT0 (0x6A)
 */
// 20240630 polling/ interrupt
    r_Config_UARTA0_interrupt_send,
//    INT_UT0,

/*
 * INT_UR0 (0x6C)
 */
    r_Config_UARTA0_interrupt_receive,

/*
 * Padding (0x6E)
 */
    (void*)0xFFFF,
    
/*
 * Padding (0x70)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x72)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x74)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x76)
 */
    (void*)0xFFFF,
    

/*
 * Padding (0x78)
 */
    (void*)0xFFFF,
    


    // Padding
    (void*)0xFFFF,
    // Padding
    (void*)0xFFFF,

/*
 * INT_BRK_I (0x7E)
 */
    INT_BRK_I,
};
