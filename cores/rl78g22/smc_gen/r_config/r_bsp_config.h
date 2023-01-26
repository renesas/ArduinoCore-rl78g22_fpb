/* Generated configuration header file - do not edit */
/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No 
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all 
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM 
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES 
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS 
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of 
* this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2022 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : r_bsp_config_reference.h
* H/W Platform : GENERIC_RL78_G22
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 20.04.2022 1.50     First Release
***********************************************************************************************************************/

#ifndef R_BSP_CONFIG_REF_HEADER_FILE
#define R_BSP_CONFIG_REF_HEADER_FILE
/*************************************************
 * MCU information
 *************************************************/
/*
 R 7 F 102G G E 3 xxx C FB #AA0
 | | |  |   | | |  |  |  |  |__not used                   Packaging specification
 | | |  |   | | |  |  |  |_____not used                   Package type
 | | |  |   | | |  |  |________not used                   Fields of application
 | | |  |   | | |  |___________not used                   ROM number(omitted with blank products)
 | | |  |   | | |______________not used                   Ambient operating temperature range
 | | |  |   | |________________BSP_CFG_MCU_PART_ROM_SIZE  ROM capacity
 | | |  |   |__________________BSP_CFG_MCU_PART_PIN_NUM   Pin count
 | | |  |______________________not used                   RL78/G22
 | | |_________________________BSP_CFG_MCU_PART_ROM_TYPE  Device type
 | |___________________________not used                   Renesas MCU
 |_____________________________not used                   Renesas semiconductor product
*/

/* ROM capacity
 C = 32(KB) : 0x0
 E = 64     : 0x1
*/
#define BSP_CFG_MCU_PART_ROM_SIZE (0x1) /* Generated value. Do not edit this manually */

/* Pin count
 4 = 16-pin  : 0x0
 6 = 20-pin  : 0x1
 7 = 24-pin  : 0x2
 8 = 25-pin  : 0x3
 A = 30-pin  : 0x4
 B = 32-pin  : 0x5
 C = 36-pin  : 0x6
 E = 40-pin  : 0x7
 F = 44-pin  : 0x8
 G = 48-pin  : 0x9
*/
#define BSP_CFG_MCU_PART_PIN_NUM (0x9) /* Generated value. Do not edit this manually */

/* group
 102G = RL78/G22 : (true)
*/
#define BSP_CFG_MCU_PART_HAS_DATA_FLASH (true)

/* Device type
 F = Flash memory : 0
*/
#define BSP_CFG_MCU_PART_ROM_TYPE (0)

#if defined(__ICCRL78__)
/* Option byte setting(When using IAR) */
#define BSP_CFG_OPTBYTE0_VALUE (0xEFU) /* Generated value. Do not edit this manually */
#define BSP_CFG_OPTBYTE1_VALUE (0x7FU) /* Generated value. Do not edit this manually */
#define BSP_CFG_OPTBYTE2_VALUE (0xE8U) /* Generated value. Do not edit this manually */
#define BSP_CFG_OPTBYTE3_VALUE (0x04U) /* Generated value. Do not edit this manually */
/* Security ID Codes for On-Chip Debugging setting(When using IAR) */
#define BSP_CFG_SECUID0_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID1_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID2_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID3_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID4_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID5_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID6_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID7_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID8_VALUE (0x00U) /* Generated value. Do not edit this manually */
#define BSP_CFG_SECUID9_VALUE (0x00U) /* Generated value. Do not edit this manually */
#endif

/*************************************************
 * Pin assignment setting
 *************************************************/
/* Peripheral I/O redirection register(PIOR-PIOR0)
   48/44-pin
 0 : TI02/TO02 - P17
     TI03/TO03 - P31
     TI04/TO04 - -
     TI05/TO05 - -
     TI06/TO06 - -
     TI07/TO07 - P41
 1 : TI02/TO02 - P15
     TI03/TO03 - P14
     TI04/TO04 - P13
     TI05/TO05 - P12
     TI06/TO06 - P11
     TI07/TO07 - P10

   40/36/32/30-pin
 0 : TI02/TO02 - P17
     TI03/TO03 - P31
     TI04/TO04 - -
     TI05/TO05 - -
     TI06/TO06 - -
     TI07/TO07 - -
 1 : TI02/TO02 - P15
     TI03/TO03 - P14
     TI04/TO04 - P13
     TI05/TO05 - P12
     TI06/TO06 - P11
     TI07/TO07 - P10
*/
// 2022/11/11
#define BSP_CFG_PIOR0 (0) /* Generated value. Do not edit this manually */

/* Peripheral I/O redirection register(PIOR-PIOR1)
   48/44/40/36/32/30-pin
 0 : TxD2  - P13
     RxD2  - P14
     SCL20 - P15
     SDA20 - P14
     SI20  - P14
     SO20  - P13
     SCK20 - P15
     TxD0  - P12
     RxD0  - P11
     SCL00 - P10
     SDA00 - P11
     SI00  - P11
     SO00  - P12
     SCK00 - P10
 1 : TxD2  - -
     RxD2  - -
     SCL20 - -
     SDA20 - -
     SI20  - -
     SO20  - -
     SCK20 - -
     TxD0  - P17
     RxD0  - P16
     SCL00 - -
     SDA00 - -
     SI00  - -
     SO00  - -
     SCK00 - -
*/
#define BSP_CFG_PIOR1 (0) /* Generated value. Do not edit this manually */

/* Peripheral I/O redirection register(PIOR-PIOR2)
   48/44/40/36/32/30-pin
 0 : SCLA0 - P60
     SDAA0 - P61
 1 : SCLA0 - P14
     SDAA0 - P13
*/
#define BSP_CFG_PIOR2 (0) /* Generated value. Do not edit this manually */

/* Peripheral I/O redirection register(PIOR-PIOR3)
   48-pin
 0 : PCLBUZ0 - P140
 1 : PCLBUZ0 - P31

   44/40/36/32/30-pin
 0 : PCLBUZ0 - -
 1 : PCLBUZ0 - -
*/
#define BSP_CFG_PIOR3 (0) /* Generated value. Do not edit this manually */

/***********************************************************
 * Invalid memory access detection control register (IAWCTL)
 ***********************************************************/
/* Control of illicit memory access detection(IAWEN)
 0 : Disables the detection of illicit memory accesses.
 1 : Enables the detection of illicit memory accesses.
*/
#define BSP_CFG_INVALID_MEMORY_ACCESS_DETECTION_ENABLE (0)

/* Protected area in the RAM(GRAM0-1)
 0 : Disabled. Writing to the RAM is allowed.
 1 : 128 bytes from the base address of the RAM.
 2 : 256 bytes from the base address of the RAM.
 3 : 512 bytes from the base address of the RAM.
*/
#define BSP_CFG_RAM_GUARD_FUNC (0)

/* Protection of the port control registers(GPORT)
 0 : Disabled. Reading from and writing to the port control registers are allowed.
 1 : Enabled. Writing to the port control registers is not allowed. Reading from them is allowed.
 [Protected SFRs] PMxx, PUxx, PIMxx, POMxx, PMCAxx, PMCTxx, PFOE1, PDIDISxx
*/
#define BSP_CFG_PORT_FUNCTION_GUARD (0)

/* Protection of the interrupt control registers(GINT)
 0 : Disabled. Reading from and writing to the interrupt control registers are allowed.
 1 : Enabled. Writing to the interrupt control registers is not allowed. Reading from them is allowed.
 [Protected SFRs] IFxx, MKxx, PRxx, EGPx, EGNx
*/
#define BSP_CFG_INT_FUNCTION_GUARD (0)

/* Protection of the clock, voltage detector, and RAM parity error detection control registers(GCSC)
 0 : Disabled. Reading from and writing to the clock, voltage detector, and RAM parity error
     detection control registers are allowed.
 1 : Enabled. Writing to the clock, voltage detector, and RAM parity error detection control registers
     is not allowed. Reading from them is allowed.
 [Protected SFRs] CMC, CSC, OSTS, CKC, PERx, OSMC, LVIM, LVIS, RPECTL,
 CKSEL, PRRx, MOCODIV, WKUPMD
*/
#define BSP_CFG_CHIP_STATE_CTRL_GUARD (0)

/*************************************************
 * Data flash
 *************************************************/
/* Data flash memory area access control
   Data flash control register(DFLCTL)
   DFLEN
 0 : Access to the data flash memory area is disabled.
 1 : Access to the data flash memory area is enabled.
*/
#define BSP_CFG_DATA_FLASH_ACCESS_ENABLE (0)

/*************************************************
 * Definition for switching functions
 *************************************************/
/* Start up select
 0 : Enable BSP startup program.
 1 : Disable BSP startup program.(e.g. Using user startup program.)
*/
#define BSP_CFG_STARTUP_DISABLE (0)

/* Initialization of peripheral functions by Code Generator/Smart Configurator
 0 : Disable initialization of peripheral functions by Code Generator/Smart Configurator.
 1 : Enable initialization of peripheral functions by Code Generator/Smart Configurator.
*/
#define BSP_CFG_CONFIGURATOR_SELECT (1)

/* Version number of Smart Configurator.
   This macro definitions is updated by Smart Configurator.
   If you are using e2studio, set the following values.
   2021-04 : 1001
   2021-07 : 1010
   2021-10 : 1010
   2022-01 : 1030
   If you are using the standalone version of Smart Configurator,
   set the following values.
   v1.0.1  : 1001
   v1.1.0  : 1010
   v1.3.0  : 1030
*/
#define BSP_CFG_CONFIGURATOR_VERSION    (1030) /* Generated value. Do not edit this manually */

/* API function disable(R_BSP_StartClock, R_BSP_StopClock)
 0 : Enable API functions
 1 : Disable API functions
*/
#define BSP_CFG_CLOCK_OPERATION_API_FUNCTIONS_DISABLE (0)

/* API function disable(R_BSP_GetFclkFreqHz)
 0 : Enable API functions
 1 : Disable API functions
*/
#define BSP_CFG_GET_FREQ_API_FUNCTIONS_DISABLE (0)

/* API function disable(R_BSP_SetClockSource)
 0 : Enable API functions
 1 : Disable API functions
*/
#define BSP_CFG_SET_CLOCK_SOURCE_API_FUNCTIONS_DISABLE (0)

/* API function disable(R_BSP_ChangeClockSetting)
 0 : Enable API functions
 1 : Disable API functions
*/
#define BSP_CFG_CHANGE_CLOCK_SETTING_API_FUNCTIONS_DISABLE (0)

/* Parameter check enable
 0 : Disable parameter check.
 1 : Enable parameter check.
*/
#define BSP_CFG_PARAM_CHECKING_ENABLE (1)

/*************************************************
 * Clock settings
 *************************************************/
/* High-speed system clock pin operation mode
   Clock operation mode control register(CMC)
   (Products with 16 to 36 pins)
    XTSEL/EXCLK/OSCSEL
   (Products with 40 to 48 pins)
    EXCLK/OSCSEL
 0 : Port mode
 1 : X1 oscillation mode
 2 : External clock input mode
*/
#define BSP_CFG_HISYSCLK_SOURCE (0) /* Generated value. Do not edit this manually */

/* High-speed system clock operation control
   Clock operation status control register(CSC)
   MSTOP
 (X1 oscillation mode)
  0 : The X1 oscillator runs.
  1 : The X1 oscillator is stopped.
 (External clock input mode)
  0 : An external clock signal on the EXCLK pin is effective.
  1 : An external clock signal on the EXCLK pin is ineffective.
 (Port mode)
  0 : I/O port
  1 : I/O port
*/
#define BSP_CFG_HISYSCLK_OPERATION (1) /* Generated value. Do not edit this manually */

/* Subsystem clock pin operation mode
   Clock operation mode control register(CMC)
   (Products with 16 to 36 pins)
    XTSEL/EXCLKS/OSCSELS
   (Products with 40 to 48 pins)
    EXCLKS/OSCSELS
 0 : Input port mode
 1 : XT1 oscillation mode
2 : External clock input mode
*/
#define BSP_CFG_SUBCLK_SOURCE (1) /* Generated value. Do not edit this manually */

/* Subsystem clock operation control
   Clock operation status control register(CSC)
   XTSTOP
 (XT1 oscillation mode)
  0 : The XT1 oscillator runs.
  1 : The XT1 oscillator is stopped.
 (External clock input mode)
  0 : An external clock signal on the EXCLKS pin is effective.
  1 : An external clock signal on the EXCLKS pin is ineffective.
 (Port mode)
  0 : Input port
  1 : Input port
*/
#define BSP_CFG_SUBCLK_OPERATION (0) /* Generated value. Do not edit this manually */

/* Middle-speed on-chip oscillator clock operation control
   Clock operation status control register(CSC)
   MIOEN
 0 : The middle-speed on-chip oscillator is stopped.
 1 : The middle-speed on-chip oscillator runs.
*/
#define BSP_CFG_MOCO_OPERATION (0) /* Generated value. Do not edit this manually */

/* Main on-chip oscillator clock(fOCO) operation control
   System clock control register(CKC)
   MCM1
 0 : High-speed on-chip oscillator clock
 1 : Middle-speed on-chip oscillator clock
*/
#define BSP_CFG_OCOCLK_SOURCE (0) /* Generated value. Do not edit this manually */

/* Main system clock(fMAIN) operation control
   System clock control register(CKC)
   MCM0
 0 : Selects the main on-chip oscillator clock(fOCO) as the main system clock(fMAIN)
 1 : Selects the high-speed system clock(fMX) as the main system clock(fMAIN)
*/
#define BSP_CFG_MAINCLK_SOURCE (0) /* Generated value. Do not edit this manually */

/* Selection of the subsystem clock X or low-speed on-chip oscillator clock
   Subsystem clock select register(CKSEL)
   SELLOSC
 0 : Subsystem clock X
 1 : Low-speed on-chip oscillator clock
*/
#define BSP_CFG_SUBSYSCLK_SOURCE (0) /* Generated value. Do not edit this manually */

/* Selection of the CPU/peripheral hardware clock(fCLK)
   System clock control register(CKC)
   CSS
 0 : Main system clock(fMAIN)
 1 : Subsystem clock(fSUB)
*/
#define BSP_CFG_FCLK_SOURCE (0) /* Generated value. Do not edit this manually */

/* Selection of the oscillation mode of the XT1 oscillator
   Clock operation mode control register(CMC)
   AMPHS1, AMPHS0
 0 : Low power consumption oscillation 1(default)
 1 : Normal oscillation
 2 : Low power consumption oscillation 2
 3 : Low power consumption oscillation 3
*/
#define BSP_CFG_XT1_OSCMODE (0) /* Generated value. Do not edit this manually */

/* Input clock frequency in Hz(High-speed system clock(X1))
*/
#define BSP_CFG_FMX_HZ (20000000)

/* Control of the X1 clock oscillation frequency
   Clock operation mode control register(CMC)
   AMPH
 0 : 1 MHz <= fX <= 10 MHz
 1 : 10 MHz < fX <= 20 MHz
 Set the value corresponding to the setting of BSP_CFG_FMX_HZ
*/

/* Selection of the oscillation stabilization time
   Oscillation stabilization time select register(OSTS)
   OSTS2, OSTS1, OSTS0
 0 : 2^8/fX(fX = 10MHz : 25.6us, fX = 20MHz : 12.8us)
 1 : 2^9/fX(fX = 10MHz : 51.2us, fX = 20MHz : 25.6us)
 2 : 2^10/fX(fX = 10MHz : 102us, fX = 20MHz : 51.2us)
 3 : 2^11/fX(fX = 10MHz : 204us, fX = 20MHz : 102us)
 4 : 2^13/fX(fX = 10MHz : 819us, fX = 20MHz : 409us)
 5 : 2^15/fX(fX = 10MHz : 3.27ms, fX = 20MHz : 1.63ms)
 6 : 2^17/fX(fX = 10MHz : 13.1ms, fX = 20MHz : 6.55ms)
 7 : 2^18/fX(fX = 10MHz : 26.2ms, fX = 20MHz : 13.1ms)
*/
#define BSP_CFG_X1_WAIT_TIME_SEL (0)

/* Setting in STOP mode or in HALT mode while the CPU is operating with subsystem clock X.
   Subsystem clock supply mode control register(OSMC)
   RTCLPC
 0 : Enables supply of subsystem clock X to peripheral functions.
 1 : Stops supply of the subsystem clock to peripheral functions other than the realtime clock.
*/
#define BSP_CFG_ALLOW_FSUB_IN_STOPHALT (0) /* Generated value. Do not edit this manually */

/* Selection of the operating clock for the realtime clock, 32-bit interval timer, 
   serial interface UARTA0, and clock output/buzzer output controller
   Subsystem clock supply mode control register(OSMC)
   WUTMMCK0
 0 : Subsystem clock X
 1 : Low-speed on-chip oscillator clock
*/
#define BSP_CFG_RTC_OUT_CLK_SOURCE (0) /* Generated value. Do not edit this manually */

/* Selection of the high-speed on-chip oscillator clock frequency
   High-speed on-chip oscillator frequency select register(HOCODIV)
   HOCODIV2, HOCODIV1, HOCODIV0

 (FRQSEL3 = 0)
  0 : fIH = 24 MHz
  1 : fIH = 12 MHz
  2 : fIH =  6 MHz
  3 : fIH =  3 MHz
  Other than above : Setting prohibited

 (FRQSEL3 = 1)
  0 : fIH = 32 MHz
  1 : fIH = 16 MHz
  2 : fIH = 8 MHz
  3 : fIH = 4 MHz
  4 : fIH = 2 MHz
  5 : fIH = 1 MHz
  Other than above : Setting prohibited
 */
#define BSP_CFG_HOCO_DIVIDE (0) /* Generated value. Do not edit this manually */

/* Setting for starting the high-speed on-chip oscillator at the times of release from STOP mode
   and of transitions to SNOOZE mode
   Standby mode release setting register(WKUPMD)
   FWKUP
 0 : Starting of the high-speed on-chip oscillator is at normal speed.
 1 : Starting of the high-speed on-chip oscillator is at high speed.
*/
#define BSP_CFG_WAKEUP_MODE (0) /* Generated value. Do not edit this manually */

/* Selected division ratio for the high-speed system clock
   High-speed system clock division register(MOSCDIV)
   MOSCDIV2, MOSCDIV1, MOSCDIV0
   0 : fMX    (fMX = 20MHz : 20MHz)
   1 : fMX/2  (fMX = 20MHz : 10MHz)
   2 : fMX/4  (fMX = 20MHz : 5MHz)
   3 : fMX/8  (fMX = 20MHz : 2.5MHz)
   4 : fMX/16 (fMX = 20MHz : 1.25MHz)
   Other than above : Setting prohibited
*/
#define BSP_CFG_MOSC_DIVIDE (0) /* Generated value. Do not edit this manually */

/* Selection of the middle-speed on-chip oscillator clock frequency
   Middle-speed on-chip oscillator frequency select register(MOCODIV)
   MOCODIV1, MOCODIV0
   0 : 4MHz
   1 : 2MHz
   2 : 1MHz
   Other than above : Setting prohibited
*/
#define BSP_CFG_MOCO_DIVIDE (0) /* Generated value. Do not edit this manually */

/* Operation setting at initial setting */
/* Starts the high-speed on-chip oscillator at initialization
 0 : Stops the high-speed on-chip oscillator at initialization
 1 : Starts the high-speed on-chip oscillator at initialization
*/
#define BSP_CFG_FIH_START_ON_STARTUP (1) /* Generated value. Do not edit this manually */

/* This macro lets other modules no if a RTOS is being used.
 0 : RTOS is not used.
 1 : FreeRTOS is used.(This is not available.)
 2 : embOS is used.(This is not available.)
 3 : MicroC_OS is used.(This is not available.)
 4 : Renesas ITRON is used.
*/
#define BSP_CFG_RTOS_USED               (0)

/* Loop count using the main system clock. */
/* The loop count refers to a loop consisting of a "for" statement that executes a single NOP instruction. */
/* Subsystem clock oscillation stabilization wait time */
/* If the main system clock is 32 MHz, 800000 means 550 ms. */
#define BSP_CFG_SUBWAITTIME              (800000U)

/* High-speed on-chip oscillator clock oscillation stabilization wait time */
/* If the main system clock 32 MHz, 30 means 22.7us. */
#define BSP_CFG_FIHWAITTIME              (30U)

/* Middle-speed on-chip oscillator clock oscillation stabilization wait time. */
/* If the main system  clock 32 MHz, 5 means 4.8us. */
#define BSP_CFG_FIMWAITTIME              (5U)

/* Low-speed on-chip oscillator clock oscillation stabilization wait time */
/* If the main system clock 32 MHz, 450 means 325us. */
#define BSP_CFG_FILWAITTIME              (450U)

/* If the user would like to determine if a warm start reset has occurred, then they may enable one or more of the
   following callback definitions AND provide a call back function name for the respective callback
   function (to be defined by the user). Setting BSP_CFG_USER_WARM_START_CALLBACK_PRE_INITC_ENABLED = 1 will result
   in a callback to the user defined my_sw_warmstart_prec_function just prior to the initialization of the C
   runtime environment by bsp_init_system.
   Setting BSP_CFG_USER_WARM_START_CALLBACK_POST_INITC_ENABLED = 1 will result in a callback to the user defined
   my_sw_warmstart_postc_function just after the initialization of the C runtime environment by bsp_init_hardware.
*/
#define BSP_CFG_USER_WARM_START_CALLBACK_PRE_INITC_ENABLED    (0)
#define BSP_CFG_USER_WARM_START_PRE_C_FUNCTION                my_sw_warmstart_prec_function

#define BSP_CFG_USER_WARM_START_CALLBACK_POST_INITC_ENABLED    (0)
#define BSP_CFG_USER_WARM_START_POST_C_FUNCTION                my_sw_warmstart_postc_function

/* If the user sets the window open period of watchdog timer to 50%,
   set the following macro definition(BSP_CFG_WDT_REFRESH_ENABLE) to 2
   and specify the callback function name for each callback function(to be defined by the user).
   Setting BSP_CFG_WDT_REFRESH_ENABLE == 2 will result in a callback to the user defined
   my_sw_wdt_refresh_init_function just prior to the clock is set by bsp_init_system.
   In addition, a callback to the user defined my_sw_wdt_refresh_setting_function occurs
   during the oscillation stabilization wait time od the subsystem clock.
*/
#define BSP_CFG_WDT_REFRESH_ENABLE                   (0)
#define BSP_CFG_USER_WDT_REFRESH_INIT_FUNCTION       my_sw_wdt_refresh_init_function
#define BSP_CFG_USER_WDT_REFRESH_SETTING_FUNCTION    my_sw_wdt_refresh_setting_function

#endif /* R_BSP_CONFIG_REF_HEADER_FILE */

