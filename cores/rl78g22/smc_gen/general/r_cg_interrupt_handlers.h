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
* File Name    : r_cg_interrupt_handlers.h
* Version      : 1.0.0
* Device(s)    : R7F102GGExFB
* Description  : None
* Creation Date: 
***********************************************************************************************************************/

#ifndef INTERRUPT_HANDLER_H
#define INTERRUPT_HANDLER_H
/*
 * INT_WDTI (0x4)
 */
void INT_WDTI(void) __attribute__ ((interrupt));

/*
 * INT_LVI (0x6)
 */
void INT_LVI(void) __attribute__ ((interrupt));

/*
 * INT_P0 (0x8)
 */
void INT_P0(void) __attribute__ ((interrupt));
void r_Config_INTC_intp0_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_P1 (0xA)
 */
void r_Config_INTC_intp1_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_P2 (0xC)
 */
void r_Config_INTC_intp2_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_P3 (0xE)
 */
void r_Config_INTC_intp3_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_P4 (0x10)
 */
void r_Config_INTC_intp4_interrupt(void) __attribute__ ((interrupt));
/* 1112 Ueeda add */

/*
 * INT_P5 (0x12)
 */
//void INT_P5(void) __attribute__ ((interrupt));
void r_Config_INTC_intp5_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_CSI20/INT_IIC20/INT_ST2 (0x14)
 */
// void r_Config_UART2_interrupt_send(void) __attribute__ ((interrupt));
void r_Config_CSI20_UART2_interrupt_send(void) __attribute__ ((interrupt));
void INT_ST2(void) __attribute__ ((interrupt));

/*
 * INT_CSI21/INT_IIC21/INT_SR2 (0x16)
 */
void r_Config_UART2_interrupt_receive(void) __attribute__ ((interrupt));
// 2022/11/07 added by KAD
void INT_SR2(void) __attribute__ ((interrupt));

/*
 * INT_SRE2 (0x18)
 */
// 2022/11/07 comment removed by KAD
void INT_SRE2(void) __attribute__ ((interrupt));
void r_Config_UART2_interrupt_error(void) __attribute__ ((interrupt));

/*
 * INT_SMSE (0x1C)
 */
void INT_SMSE(void) __attribute__ ((interrupt));

/*
 * INT_CSI00/INT_IIC00/INT_ST0 (0x1E)
 */
void r_Config_UART0_interrupt_send(void) __attribute__ ((interrupt));
// 2022/11/07 added by KAD
void INT_ST0(void) __attribute__ ((interrupt));

/*
 * INT_TM00 (0x20)
 */
void r_Config_TAU0_0_PWM_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_SRE0/INT_TM01H (0x22)
 */
void r_Config_UART0_interrupt_error(void) __attribute__ ((interrupt));
void INT_TM01H(void) __attribute__ ((interrupt));
/*
 * INT_ST1 (0x24)
 */
void r_Config_UART1_interrupt_send(void) __attribute__ ((interrupt));
void INT_ST1(void) __attribute__ ((interrupt));

/*
 * INT_CSI11/INT_IIC11/INT_SR1 (0x26)
 */
void r_Config_CSI11_UART1_interrupt_switching(void) __attribute__ ((interrupt));
void r_Config_UART1_interrupt_receive(void);
void INT_SR1(void) __attribute__ ((interrupt));
/*
 * INT_SRE1/INT_TM03H (0x28)
 */
// 2022/11/07 added by KAD
void INT_TM03H(void) __attribute__ ((interrupt));
void r_Config_UART1_interrupt_error(void) __attribute__ ((interrupt));
void INT_SRE1(void) __attribute__ ((interrupt));

/*
 * INT_IICA0 (0x2A)
 */
void r_Config_IICA0_interrupt(void) __attribute__ ((interrupt));
/*
 * INT_CSI01/INT_IIC01/INT_SR0 (0x2C)
 */
void INT_SR0(void) __attribute__ ((interrupt));
void r_Config_IIC01_UART0_interrupt_switching(void) __attribute__ ((interrupt));

/*
 * INT_TM01 (0x2E)
 */
void r_Config_TAU0_1_Square_Wave_interrupt(void) __attribute__ ((interrupt));
void INT_TM01(void) __attribute__ ((interrupt));
/* 1118 nhu add */

/*
 * INT_TM02 (0x30)
 */
void r_Config_TAU0_2_Square_Wave_interrupt(void) __attribute__ ((interrupt));
void INT_TM02(void) __attribute__ ((interrupt));

/*
 * INT_TM03 (0x32)
 */
void r_Config_TAU0_3_Square_Wave_interrupt(void) __attribute__ ((interrupt));
void INT_TM03(void) __attribute__ ((interrupt));

/*
 * INT_AD (0x34)
 */
void r_Config_ADC_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_RTC (0x36)
 */
void r_Config_RTC_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_ITL (0x38)
 */
void r_itl_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_KR (0x3A)
 */
void INT_KR(void) __attribute__ ((interrupt));

/*
 * INT_TM04 (0x42)
 */
void r_Config_TAU0_4_Servo_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_TM05 (0x44)
 */
void r_Config_TAU0_5_Servo_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_TM06 (0x46)
 */
void r_Config_TAU0_6_Square_Wave_interrupt(void) __attribute__ ((interrupt));
void r_Config_TAU0_6_Micros_interrupt(void) __attribute__ ((interrupt));
void INT_TM06(void) __attribute__ ((interrupt));

/*
 * INT_TM07 (0x48)
 */
void r_Config_TAU0_7_Square_Wave_interrupt(void) __attribute__ ((interrupt));
void INT_TM07(void) __attribute__ ((interrupt));

/*
 * INT_P6 (0x4A)
 */
void r_Config_INTC_intp6_interrupt(void) __attribute__ ((interrupt));

/*
 * INT_P8 (0x4E)
 */
void INT_P8(void) __attribute__ ((interrupt));

/*
 * INT_P9 (0x50)
 */
void INT_P9(void) __attribute__ ((interrupt));

/*
 * INT_FL (0x52)
 */
void INT_FL(void) __attribute__ ((interrupt));

/*
 * INT_URE0 (0x58)
 */
void INT_URE0(void) __attribute__ ((interrupt));

/*
 * INT_CTSUWR (0x60)
 */
void INT_CTSUWR(void) __attribute__ ((interrupt));

/*
 * INT_CTSURD (0x64)
 */
void INT_CTSURD(void) __attribute__ ((interrupt));

/*
 * INT_CTSUFN (0x66)
 */
void INT_CTSUFN(void) __attribute__ ((interrupt));

/*
 * INT_UT0 (0x6A)
 */
// 20240628 polling/ interrupt
void r_Config_UARTA0_interrupt_send (void) __attribute__ ((interrupt));
// void INT_UT0 (void) __attribute__ ((interrupt));

/*
 * INT_UR0 (0x6C)
 */
void r_Config_UARTA0_interrupt_receive (void) __attribute__ ((interrupt));

/*
 * INT_BRK_I (0x7E)
 */
void INT_BRK_I(void) __attribute__ ((interrupt));

//Hardware Vectors
//PowerON_Reset (0x0)
void PowerON_Reset(void) __attribute__ ((interrupt));

#endif
