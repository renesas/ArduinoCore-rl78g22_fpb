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
* File Name    : r_cg_ad.h
* Version      : 1.0.0
* Device(s)    : R7F102GGExFB
* Description  : General header file for ADC peripheral.
* Creation Date: 
***********************************************************************************************************************/

#ifndef ADC_H
#define ADC_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    Peripheral Enable Register 0 (PER0)
*/
/* Control of A/D converter input clock (ADCEN) */
#define _00_AD_CLOCK_STOP                      (0x00U)    /* stop supply of input clock */
#define _20_AD_CLOCK_SUPPLY                    (0x20U)    /* supply input clock */

/*
    Peripheral Reset Control Register 0 (PRR0)
*/
/* Reset control for A/D converters (ADCRES) */
#define _00_AD_RESET_RELEASE                   (0x00U)    /* released from the reset state */
#define _20_AD_RESET_SET                       (0x20U)    /* reset state */

/*
    A/D Converter Mode Register 0 (ADM0)
*/
/* A/D conversion operation control (ADCS) */
#define _00_AD_CONVERSION_DISABLE              (0x00U)    /* disable A/D conversion operation control */
#define _80_AD_CONVERSION_ENABLE               (0x80U)    /* enable A/D conversion operation control */
/* Specification of the A/D conversion channel selection mode (ADMD) */
#define _00_AD_OPERMODE_SELECT                 (0x00U)    /* select operation mode */
#define _40_AD_OPERMODE_SCAN                   (0x40U)    /* scan operation mode */
/* A/D conversion clock selection (FR2 - FR0) */
#define _00_AD_CONVERSION_CLOCK_64             (0x00U)    /* fCLK/64 */
#define _08_AD_CONVERSION_CLOCK_32             (0x08U)    /* fCLK/32 */
#define _10_AD_CONVERSION_CLOCK_16             (0x10U)    /* fCLK/16 */
#define _18_AD_CONVERSION_CLOCK_8              (0x18U)    /* fCLK/8 */
#define _20_AD_CONVERSION_CLOCK_6              (0x20U)    /* fCLK/6 */
#define _28_AD_CONVERSION_CLOCK_5              (0x28U)    /* fCLK/5 */
#define _30_AD_CONVERSION_CLOCK_4              (0x30U)    /* fCLK/4 */
#define _38_AD_CONVERSION_CLOCK_2              (0x38U)    /* fCLK/2 */
/* Specification A/D conversion time mode (LV1, LV0) */
#define _00_AD_TIME_MODE_NORMAL_1              (0x00U)    /* normal 1 mode */
#define _02_AD_TIME_MODE_NORMAL_2              (0x02U)    /* normal 2 mode */
#define _04_AD_TIME_MODE_LOWVOLTAGE_1          (0x04U)    /* low-voltage 1 mode */
#define _06_AD_TIME_MODE_LOWVOLTAGE_2          (0x06U)    /* low-voltage 2 mode */
/* A/D voltage comparator operation control (ADCE) */
#define _00_AD_COMPARATOR_DISABLE              (0x00U)    /* disable comparator operation control */
#define _01_AD_COMPARATOR_ENABLE               (0x01U)    /* enable comparator operation control */


/*
    Analog Input Channel Specification Register(ADS)
*/
/* Specification of analog input channel(ADISS, ADS4 - ADS0) */
/* Select mode */
#define _00_AD_INPUT_CHANNEL_0                 (0x00U)    /* ANI0 */
#define _01_AD_INPUT_CHANNEL_1                 (0x01U)    /* ANI1 */
#define _02_AD_INPUT_CHANNEL_2                 (0x02U)    /* ANI2 */
#define _03_AD_INPUT_CHANNEL_3                 (0x03U)    /* ANI3 */
#define _04_AD_INPUT_CHANNEL_4                 (0x04U)    /* ANI4 */
#define _05_AD_INPUT_CHANNEL_5                 (0x05U)    /* ANI5 */
#define _06_AD_INPUT_CHANNEL_6                 (0x06U)    /* ANI6 */
#define _07_AD_INPUT_CHANNEL_7                 (0x07U)    /* ANI7 */
#define _10_AD_INPUT_CHANNEL_16                (0x10U)    /* ANI16 */
#define _11_AD_INPUT_CHANNEL_17                (0x11U)    /* ANI17 */
#define _12_AD_INPUT_CHANNEL_18                (0x12U)    /* ANI18 */
#define _13_AD_INPUT_CHANNEL_19                (0x13U)    /* ANI19 */
#define _1E_AD_INPUT_CTSUTSCAP                 (0x1EU)    /* TSCAP voltage of the CTSU */
#define _80_AD_INPUT_TEMPERSENSOR_0            (0x80U)    /* temperature sensor output voltage */
#define _81_AD_INPUT_INTERREFVOLT              (0x81U)    /* internal reference voltage */
/* Scan mode */
#define _00_AD_INPUT_CHANNEL_0_3               (0x00U)    /* ANI0 - ANI3 */
#define _01_AD_INPUT_CHANNEL_1_4               (0x01U)    /* ANI1 - ANI4 */
#define _02_AD_INPUT_CHANNEL_2_5               (0x02U)    /* ANI2 - ANI5 */
#define _03_AD_INPUT_CHANNEL_3_6               (0x03U)    /* ANI3 - ANI6 */
#define _04_AD_INPUT_CHANNEL_4_7               (0x04U)    /* ANI4 - ANI7 */

/*
    A/D Converter Mode Register 1 (ADM1)
*/
/* Selection of the A/D conversion trigger mode (ADTMD1, ADTMD0) */
#define _00_AD_TRIGGER_SOFTWARE                (0x00U)    /* software trigger mode */
#define _80_AD_TRIGGER_HARDWARE_NOWAIT         (0x80U)    /* hardware trigger no-wait mode */
#define _C0_AD_TRIGGER_HARDWARE_WAIT           (0xC0U)    /* hardware trigger wait mode */
/* Specification of the A/D conversion mode (ADSCM)*/
#define _00_AD_CONVMODE_CONSELECT              (0x00U)    /* sequential conversion mode */
#define _20_AD_CONVMODE_ONESELECT              (0x20U)    /* one-shot conversion mode */
/* Selection of the hardware trigger signal (ADTRS1, ADTRS0) */
#define _00_AD_TRIGGER_INTTM01                 (0x00U)    /* end of timer channel 01 count or capture interrupt
                                                             signal (INTTM01) */
#define _01_AD_TRIGGER_ELC                     (0x01U)    /* event input from the ELC */
#define _02_AD_TRIGGER_INTRTC                  (0x02U)    /* realtime clock interrupt signal (INTRTC) */
#define _03_AD_TRIGGER_ELCITL0                 (0x03U)    /* 32-bit interval timer interrupt signal (ELCITL0) */

/*
    A/D Converter Mode Register 2 (ADM2)
*/
/* Selection of the positive reference voltage source of the A/D converter (ADREFP1, ADREFP0) */
#define _00_AD_POSITIVE_VDD                    (0x00U)    /* use VDD as VREF(+) */
#define _40_AD_POSITIVE_AVREFP                 (0x40U)    /* use AVREFP as VREF(+) */
#define _80_AD_POSITIVE_INTERVOLT              (0x80U)    /* use internal voltage as VREF(+) */
#define _C0_AD_POSITIVE_DISCHARGE              (0xC0U)    /* discharge */
#define _3F_AD_POSITIVE_CLEAR                  (0x3FU)    /* clear ADREFP1 and ADREFP0 */
/* Selection of the negative reference voltage of the A/D converter (ADREFM) */
#define _00_AD_NEGATIVE_VSS                    (0x00U)    /* use VSS as VREF(-) */
#define _20_AD_NEGATIVE_AVREFM                 (0x20U)    /* use AVREFM as VREF(-) */
/* Checking the upper limit and lower limit conversion result values (ADRCK) */
#define _00_AD_AREA_MODE_1                     (0x00U)    /* generates INTAD when ADLL <= ADCRH <= ADUL */
#define _08_AD_AREA_MODE_2_3                   (0x08U)    /* generates INTAD when ADUL < ADCRH or ADLL > ADCRH */
/* Specification of the SNOOZE mode (AWC) */
#define _00_AD_WAKEUP_OFF                      (0x00U)    /* do not use the SNOOZE mode function */
#define _04_AD_WAKEUP_ON                       (0x04U)    /* use the SNOOZE mode function */
/* Selection of the A/D conversion resolution (ADTYP) */
#define _00_AD_RESOLUTION_10BIT                (0x00U)    /* 10 bits */
#define _01_AD_RESOLUTION_8BIT                 (0x01U)    /* 8 bits */


/*
    A/D Test Register (ADTES)
*/
/* A/D conversion target (ADTES1, ADTES0)*/
#define _00_AD_NORMAL_INPUT                    (0x00U)    /* normal mode */
#define _02_AD_TEST_AVREFM                     (0x02U)    /* use AVREFM as test signal */
#define _03_AD_TEST_AVREFP                     (0x03U)    /* use AVREFP as test signal */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
