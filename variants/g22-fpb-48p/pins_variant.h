/*
  Copyright (c) 2014-2016 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _PINS_VARIANT_H_
#define _PINS_VARIANT_H_

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include <stdint.h>
#include <stdlib.h>

#ifndef configCPU_CLOCK_HZ
#define configCPU_CLOCK_HZ 					(32000000)	//!< CPUの動作周波数（RTOS未使用時に定義）
#endif

#define F_CPU (32 * 1000 * 1000L)

// G22:1 , G23 :2 , G16:1, G24:3
#define MICROS_TIMER_DIVIDE_FACTOR ((uint32_t)1)

#define UART_CHANNEL 		0		// UART0(Serial0)
#define UART1_CHANNEL       1       // UART1(Serial1)
#define UART2_CHANNEL       2       // UART2(Serial2)
#define UART3_CHANNEL       3       // UARTA1(Serial3)
#define UART_TOTAL_NUM 4
/* SPI(CSI) Definition */
#define USE_CSI      (1) // Set to '1' when Use SPI Hardware.

#if defined(USE_CSI) && USE_CSI

// #define CSI_CHANNEL0 (0) // USE CSI00 for SPI
// #define CSI_CHANNEL1 (1) // USE CSI01 for SPI
// #define CSI_CHANNEL2 (2) // USE CSI10 for SPI
// #define CSI_CHANNEL3 (3) // USE CSI11 for SPI
#define CSI_CHANNEL4 (4) // USE CSI20 for SPI
// #define CSI_CHANNEL5 (5) // USE CSI21 for SPI
// #define CSI_CHANNEL6 (6) // USE CSI30 for SPI
// #define CSI_CHANNEL7 (7) // USE CSI31 for SPI

#endif /* defined(USE_CSI) && USE_CSI */

/* IIC Definition */
#define IIC_CHANNEL0 (0)
#define IIC_CHANNEL1 (0)


#define CHECK_PINMODE_INHIBIT_RL78(p) (\
    (p) == 27 || /* P21(AVREFM) */\
    (p) == 35    /* P20(AVREFP) */)
#define CHECK_OUTPUT_INHIBIT_RL78(p) (\
    (p) == 8 ||  /* P30(TSCAP) */\
    (p) == 26 || /* P22(Touch Slider) */\
    (p) == A2 || /* P26(Touch Slider) */\
    (p) == A3 || /* P25(Touch Slider) */\
    (p) == A4 || /* P24(Touch Slider) */\
    (p) == A5    /* P23(Touch Slider) */)

// 2023/03/02 end of copy from Arduino.h

#ifdef __cplusplus
extern "C"
{

// moved from wiring_private.h
#define FREQUENCY_MIN_VAL	(500)
#define FREQUENCY_MAX_VAL	(8000000)

#define TONE_CH_NUM				(7)

#define TAU_OPERATION_CLOCK		(0xC000U)    /* operation clock set by PRS register */
#define CK00_CK01_OPERATION		(0x000F)	/* Selection of operation clock CK00, CK01 */
#define CK02_OPERATION			(0x0300)	/* Selection of operation clock CK02 */
#define CK03_OPERATION			(0x3000)	/* Selection of operation clock CK03 */
#define TIMEOUT_MAX_VAL			(65535)
#define PULSE_INTERUPT			(1)

#define _4000_TAU_CLOCK_SELECT_CKM2       (0x4000U)    /* operation clock CK2 set by PRS register */
#define _0000_TAU_CKM2_FCLK_1             (0x0000U)    /* ckm2 - fCLK/2^1 */
#define _C000_TAU_CLOCK_SELECT_CKM3       (0xC000U)    /* operation clock CK3 set by PRS register */


}
#endif // __cplusplus

// tone_func

int8_t get_tone_channel(uint8_t tone_num);

typedef struct {
    void (*open)();
    void (*start)();
    void (*stop)();
    void (*get_width)(uint32_t * const width);
} pulse_in_func;


/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

#define NUM_DIGITAL_PINS            44
#define NUM_ANALOG_INPUTS           8
#define NUM_SWPWM_PINS              4
#define analogInputToDigitalPin(p)  ((p < 6) ? (p) + 14 : -1)

#define digitalPinHasPWM(p)         ((p) == 3 || (p) == 5 || (p) == 6 || (p) == 9 || (p) == 10 || (p) == 11)


#define PIN_SPI_SS    (10)
#define PIN_SPI_MOSI  (11)
#define PIN_SPI_MISO  (12)
#define PIN_SPI_SCK   (13)

extern const uint8_t SS;
extern const uint8_t MOSI;
extern const uint8_t MISO;
extern const uint8_t SCK;

#define PIN_WIRE_SDA0        (48) // P61
#define PIN_WIRE_SCL0        (47) // P60
#define PIN_WIRE_SDA1        (50) // P63
#define PIN_WIRE_SCL1        (49) // P62

#define PIN_WIRE_SDA0_MASK   0x02 // P61
#define PIN_WIRE_SCL0_MASK   0x01 // P60
#define PIN_WIRE_SDA1_MASK   0x08 // P63
#define PIN_WIRE_SCL1_MASK   0x04 // P62

extern const uint8_t SDA0;
extern const uint8_t SCL0;
extern const uint8_t SDA1;
extern const uint8_t SCL1;

#define BUILTIN_LED1 14
#define BUILTIN_LED2 15
#define LED_BUILTIN  BUILTIN_LED1

#define LED_ON  LOW
#define LED_OFF HIGH

#define PIN_A0   (38)	/*A0 = ANI18 */
#define PIN_A1   (39)	/*A1 = ANI7 */
#define PIN_A2   (40)	/*A2 = ANI6 */
#define PIN_A3   (41)	/*A3 = ANI5 */
#define PIN_A4   (42)	/*A4 = ANI4 */
#define PIN_A5   (43)	/*A5 = ANI3 */
#define PIN_A6	(26)	/* ANI16 */
#define PIN_A7	(4)	/* ANI19 P120 */

extern const uint8_t A0;
extern const uint8_t A1;
extern const uint8_t A2;
extern const uint8_t A3;
extern const uint8_t A4;
extern const uint8_t A5;
extern const uint8_t A6;
extern const uint8_t A7;
extern const uint8_t A8;
extern const uint8_t A9;
#define digitalPinToInterrupt(p)  (((p) == 2) ? 0 : (((p) == 3) ? 1 : (((p) == 10) ? 2 : (((p) == 32) ? 3 : NOT_AN_INTERRUPT))))

/***************************************************************************/
/*    Macro Definitions                                                    */
/***************************************************************************/
#define ADDR_PORT_REG			0xFFFFFF00
#define ADDR_PORT_MODE_REG		0xFFFFFF20
#define ADDR_PORT_PULL_UP_REG	0xFFFF0030
#define	ADDR_PORT_IN_MODE_REG	0xFFFF0040
#define ADDR_PORT_OUT_MODE_REG	0xFFFF0050

#define ADDR_PORT_MODE_CONTROL_A_REG	0xFFFF0060
#define ADDR_PORT_MODE_CONTROL_T_REG	0xFFFF0260

#define ANALOG_PIN_0		18		// ANI18 (DIGITAL_PIN_38)
#define ANALOG_PIN_1		7		// ANI7 (DIGITAL_PIN_39)
#define ANALOG_PIN_2		6		// ANI6 (DIGITAL_PIN_40)
#define ANALOG_PIN_3		5		// ANI5 (DIGITAL_PIN_41)
#define ANALOG_PIN_4		4		// ANI4 (DIGITAL_PIN_42)
#define ANALOG_PIN_5		3		// ANI3 (DIGITAL_PIN_43)
#define ANALOG_PIN_6		2		// ANI2 (DIGITAL_PIN_22)
#define ANALOG_PIN_7		19		// ANI19 (DIGITAL_PIN_120)

/* Port define. */
#define PORT_0				0
#define PORT_1				1
#define PORT_2				2
#define PORT_3				3
#define PORT_4				4
#define PORT_5				5
#define PORT_6				6
#define PORT_7				7
#define PORT_8				8
#define PORT_9				9
#define PORT_10				10
#define PORT_11				11
#define PORT_12				12
#define PORT_13				13
#define PORT_14				14
#define PORT_15				15

/* Port of digital pin define. */
#define DIGITAL_PIN_0		PORT_0	/* P01	*/
#define DIGITAL_PIN_1		PORT_0	/* P00	*/
#define DIGITAL_PIN_2		PORT_14	/* P140	*/
#define DIGITAL_PIN_3		PORT_3	/* P31	*/
#define DIGITAL_PIN_4		PORT_12	/* P120	*/
#define DIGITAL_PIN_5		PORT_4	/* P41	*/
#define DIGITAL_PIN_6		PORT_1	/* P10	*/
#define DIGITAL_PIN_7		PORT_14	/* P146	*/
#define DIGITAL_PIN_8		PORT_3	/* P30	*/
#define DIGITAL_PIN_9		PORT_1	/* P17	*/
#define DIGITAL_PIN_10		PORT_1	/* P16	*/
#define DIGITAL_PIN_11		PORT_1	/* P13	*/
#define DIGITAL_PIN_12		PORT_1	/* P14	*/
#define DIGITAL_PIN_13		PORT_1	/* P15	*/
#define DIGITAL_PIN_14		PORT_6	/* P62	*/
#define DIGITAL_PIN_15		PORT_6	/* P63	*/
#define DIGITAL_PIN_16		PORT_7	/* P75	*/
#define DIGITAL_PIN_17		PORT_7	/* P74	*/
#define DIGITAL_PIN_18		PORT_7	/* P73	*/
#define DIGITAL_PIN_19		PORT_7	/* P72	*/
#define DIGITAL_PIN_20		PORT_7	/* P71	*/
#define DIGITAL_PIN_21		PORT_7	/* P70	*/
#define DIGITAL_PIN_22		PORT_5	/* P50	*/
#define DIGITAL_PIN_23		PORT_5	/* P51	*/
#define DIGITAL_PIN_24		PORT_1	/* P12	*/
#define DIGITAL_PIN_25		PORT_1	/* P11	*/
#define DIGITAL_PIN_26		PORT_2	/* P22	*/
#define DIGITAL_PIN_27		PORT_2	/* P21	*/
#define DIGITAL_PIN_28		PORT_13	/* P130	*/
#define DIGITAL_PIN_29		PORT_4	/* P40	*/
#define DIGITAL_PIN_30		PORT_12	/* P124 */
#define DIGITAL_PIN_31		PORT_12	/* P123	*/
#define DIGITAL_PIN_32		PORT_13	/* P137	*/
#define DIGITAL_PIN_33		PORT_12	/* P122	*/
#define DIGITAL_PIN_34		PORT_12	/* P121	*/
#define DIGITAL_PIN_35		PORT_2	/* P20	*/
#define DIGITAL_PIN_36		PORT_6	/* P60	*/
#define DIGITAL_PIN_37		PORT_6	/* P61	*/

/* For A0-A5 */
#define DIGITAL_PIN_38		PORT_14	/* P147	*/
#define DIGITAL_PIN_39		PORT_2	/* P27	*/
#define DIGITAL_PIN_40		PORT_2	/* P26	*/
#define DIGITAL_PIN_41		PORT_2	/* P25	*/
#define DIGITAL_PIN_42		PORT_2	/* P24	*/
#define DIGITAL_PIN_43		PORT_2	/* P23	*/

/* Bit Num of digital pin define */
#define DIGITAL_PIN_BIT_0	0x01	/* P01	*/
#define DIGITAL_PIN_BIT_1	0x00	/* P00	*/
#define DIGITAL_PIN_BIT_2	0x00	/* P140	*/
#define DIGITAL_PIN_BIT_3	0x01	/* P31	*/
#define DIGITAL_PIN_BIT_4	0x00	/* P120	*/
#define DIGITAL_PIN_BIT_5	0x01	/* P41	*/
#define DIGITAL_PIN_BIT_6	0x00	/* P10	*/
#define DIGITAL_PIN_BIT_7	0x06	/* P146	*/
#define DIGITAL_PIN_BIT_8	0x00	/* P30	*/
#define DIGITAL_PIN_BIT_9	0x07	/* P17	*/
#define DIGITAL_PIN_BIT_10	0x06	/* P16	*/
#define DIGITAL_PIN_BIT_11	0x03	/* P13	*/
#define DIGITAL_PIN_BIT_12	0x04	/* P14	*/
#define DIGITAL_PIN_BIT_13	0x05	/* P15	*/
#define DIGITAL_PIN_BIT_14	0x02	/* P62	*/
#define DIGITAL_PIN_BIT_15	0x03	/* P63	*/
#define DIGITAL_PIN_BIT_16	0x05	/* P75	*/
#define DIGITAL_PIN_BIT_17	0x04	/* P74	*/
#define DIGITAL_PIN_BIT_18	0x03	/* P73	*/
#define DIGITAL_PIN_BIT_19	0x02	/* P72	*/
#define DIGITAL_PIN_BIT_20	0x01	/* P71	*/
#define DIGITAL_PIN_BIT_21	0x00	/* P70	*/
#define DIGITAL_PIN_BIT_22	0x00	/* P50	*/
#define DIGITAL_PIN_BIT_23	0x01	/* P51	*/
#define DIGITAL_PIN_BIT_24	0x02	/* P12	*/
#define DIGITAL_PIN_BIT_25	0x01	/* P11	*/
#define DIGITAL_PIN_BIT_26	0x02	/* P22	*/
#define DIGITAL_PIN_BIT_27	0x01	/* P21	*/
#define DIGITAL_PIN_BIT_28	0x00	/* P130	*/
#define DIGITAL_PIN_BIT_29	0x00	/* P40	*/
#define DIGITAL_PIN_BIT_30	0x04	/* P124	*/
#define DIGITAL_PIN_BIT_31	0x03	/* P123	*/
#define DIGITAL_PIN_BIT_32	0x07	/* P137	*/
#define DIGITAL_PIN_BIT_33	0x02	/* P122	*/
#define DIGITAL_PIN_BIT_34	0x01	/* P121	*/
#define DIGITAL_PIN_BIT_35	0x00	/* P20	*/
#define DIGITAL_PIN_BIT_36	0x00	/* P60	*/
#define DIGITAL_PIN_BIT_37	0x01	/* P61	*/
#define DIGITAL_PIN_BIT_38	0x07	/* P147	*/
#define DIGITAL_PIN_BIT_39	0x07	/* P27	*/
#define DIGITAL_PIN_BIT_40	0x06	/* P26	*/
#define DIGITAL_PIN_BIT_41	0x05	/* P25	*/
#define DIGITAL_PIN_BIT_42	0x04	/* P24	*/
#define DIGITAL_PIN_BIT_43	0x03	/* P23	*/

/* Bit mask of digital pin define. */
#define DIGITAL_PIN_MASK_0		0x02	/* P01	*/
#define DIGITAL_PIN_MASK_1		0x01	/* P00	*/
#define DIGITAL_PIN_MASK_2		0x01	/* P140	*/
#define DIGITAL_PIN_MASK_3		0x02	/* P31	*/
#define DIGITAL_PIN_MASK_4		0x01	/* P120	*/
#define DIGITAL_PIN_MASK_5		0x02	/* P41	*/
#define DIGITAL_PIN_MASK_6		0x01	/* P10	*/
#define DIGITAL_PIN_MASK_7		0x40	/* P146	*/
#define DIGITAL_PIN_MASK_8		0x01	/* P30	*/
#define DIGITAL_PIN_MASK_9		0x80	/* P17	*/
#define DIGITAL_PIN_MASK_10		0x40	/* P16	*/
#define DIGITAL_PIN_MASK_11		0x08	/* P13	*/
#define DIGITAL_PIN_MASK_12		0x10	/* P14	*/
#define DIGITAL_PIN_MASK_13		0x20	/* P15	*/
#define DIGITAL_PIN_MASK_14		0x04	/* P62	*/
#define DIGITAL_PIN_MASK_15		0x08	/* P63	*/
#define DIGITAL_PIN_MASK_16		0x20	/* P75	*/
#define DIGITAL_PIN_MASK_17		0x10	/* P74	*/
#define DIGITAL_PIN_MASK_18		0x08	/* P73	*/
#define DIGITAL_PIN_MASK_19		0x04	/* P72	*/
#define DIGITAL_PIN_MASK_20		0x02	/* P71	*/
#define DIGITAL_PIN_MASK_21		0x01	/* P70	*/
#define DIGITAL_PIN_MASK_22		0x20	/* P50	*/
#define DIGITAL_PIN_MASK_23		0x02	/* P51	*/
#define DIGITAL_PIN_MASK_24		0x04	/* P12	*/
#define DIGITAL_PIN_MASK_25		0x02	/* P11	*/
#define DIGITAL_PIN_MASK_26		0x04	/* P22	*/
#define DIGITAL_PIN_MASK_27		0x02	/* P21	*/
#define DIGITAL_PIN_MASK_28		0x01	/* P130	*/
#define DIGITAL_PIN_MASK_29		0x01	/* P40	*/
#define DIGITAL_PIN_MASK_30		0x10	/* P124	*/
#define DIGITAL_PIN_MASK_31		0x08	/* P123	*/
#define DIGITAL_PIN_MASK_32		0x80	/* P137	*/
#define DIGITAL_PIN_MASK_33		0x04	/* P122	*/
#define DIGITAL_PIN_MASK_34		0x02	/* P121	*/
#define DIGITAL_PIN_MASK_35		0x01	/* P20	*/
#define DIGITAL_PIN_MASK_36		0x01	/* P60	*/
#define DIGITAL_PIN_MASK_37		0x02	/* P61	*/
#define DIGITAL_PIN_MASK_38		0x80 	/* P147	*/
#define DIGITAL_PIN_MASK_39		0x80	/* P27	*/
#define DIGITAL_PIN_MASK_40		0x40	/* P26	*/
#define DIGITAL_PIN_MASK_41		0x20	/* P25	*/
#define DIGITAL_PIN_MASK_42		0x10	/* P24	*/
#define DIGITAL_PIN_MASK_43		0x08	/* P23	*/

/* Add for G23 PMCA & PMCT & PMCE */
// these are only mask
// used at the pinmode in wiring_digital.c (*p->portModeControlARegisterAddr &= (unsigned long)~(p->pmca);)
// #define DIGITAL_PIN_PMCA_0		0x02	/* P01	*/
// #define DIGITAL_PIN_PMCA_1		0x01	/* P00	*/

#define DIGITAL_PIN_PMCA_0		0x00	/* P01	*/
#define DIGITAL_PIN_PMCA_1		0x00	/* P00	*/
#define DIGITAL_PIN_PMCA_2		0x00	/* P140	*/
#define DIGITAL_PIN_PMCA_3		0x00	/* P31	*/
#define DIGITAL_PIN_PMCA_4		0x01	/* P120	*/
#define DIGITAL_PIN_PMCA_5		0x00	/* P41	*/
#define DIGITAL_PIN_PMCA_6		0x00	/* P10	*/
#define DIGITAL_PIN_PMCA_7		0x00	/* P146	*/
#define DIGITAL_PIN_PMCA_8		0x00	/* P30	*/
#define DIGITAL_PIN_PMCA_9		0x00	/* P17	*/
#define DIGITAL_PIN_PMCA_10		0x00	/* P16	*/
#define DIGITAL_PIN_PMCA_11		0x00	/* P13	*/
#define DIGITAL_PIN_PMCA_12		0x00	/* P14	*/
#define DIGITAL_PIN_PMCA_13		0x00	/* P15	*/
#define DIGITAL_PIN_PMCA_14		0x00	/* P62	*/
#define DIGITAL_PIN_PMCA_15		0x00	/* P63	*/
#define DIGITAL_PIN_PMCA_16		0x00	/* P75	*/
#define DIGITAL_PIN_PMCA_17		0x00	/* P74	*/
#define DIGITAL_PIN_PMCA_18		0x00	/* P73	*/
#define DIGITAL_PIN_PMCA_19		0x00	/* P72	*/
#define DIGITAL_PIN_PMCA_20		0x00	/* P71	*/
#define DIGITAL_PIN_PMCA_21		0x00	/* P70	*/
#define DIGITAL_PIN_PMCA_22		0x00	/* P50	*/
#define DIGITAL_PIN_PMCA_23		0x00	/* P51	*/
#define DIGITAL_PIN_PMCA_24		0x00	/* P12	*/
#define DIGITAL_PIN_PMCA_25		0x00	/* P11	*/
#define DIGITAL_PIN_PMCA_26		0x04	/* P22	*/
#define DIGITAL_PIN_PMCA_27		0x02	/* P21	*/
#define DIGITAL_PIN_PMCA_28		0x00	/* P130	*/
#define DIGITAL_PIN_PMCA_29		0x00	/* P40	*/
#define DIGITAL_PIN_PMCA_30		0x00	/* P124	*/
#define DIGITAL_PIN_PMCA_31		0x00	/* P123	*/
#define DIGITAL_PIN_PMCA_32		0x00	/* P137	*/
#define DIGITAL_PIN_PMCA_33		0x00	/* P122	*/
#define DIGITAL_PIN_PMCA_34		0x00	/* P121	*/
#define DIGITAL_PIN_PMCA_35		0x01	/* P20	*/
#define DIGITAL_PIN_PMCA_36		0x00	/* P60	*/
#define DIGITAL_PIN_PMCA_37		0x00	/* P61	*/
#define DIGITAL_PIN_PMCA_38		0x80 	/* P147	*/
#define DIGITAL_PIN_PMCA_39		0x80	/* P27	*/
#define DIGITAL_PIN_PMCA_40		0x40	/* P26	*/
#define DIGITAL_PIN_PMCA_41		0x20	/* P25	*/
#define DIGITAL_PIN_PMCA_42		0x10	/* P24	*/
#define DIGITAL_PIN_PMCA_43		0x08	/* P23	*/

#define DIGITAL_PIN_PMCT_0		0x02	/* P01	*/
#define DIGITAL_PIN_PMCT_1		0x01	/* P00	*/
#define DIGITAL_PIN_PMCT_2		0x01	/* P140	*/
#define DIGITAL_PIN_PMCT_3		0x02	/* P31	*/
#define DIGITAL_PIN_PMCT_4		0x00	/* P120	*/
#define DIGITAL_PIN_PMCT_5		0x00	/* P41	*/
#define DIGITAL_PIN_PMCT_6		0x01	/* P10	*/
#define DIGITAL_PIN_PMCT_7		0x40	/* P146	*/
#define DIGITAL_PIN_PMCT_8		0x01	/* P30	*/
#define DIGITAL_PIN_PMCT_9		0x80	/* P17	*/
#define DIGITAL_PIN_PMCT_10 	0x40	/* P16	*/
#define DIGITAL_PIN_PMCT_11 	0x08	/* P13	*/
#define DIGITAL_PIN_PMCT_12 	0x10	/* P14	*/
#define DIGITAL_PIN_PMCT_13 	0x20	/* P15	*/
#define DIGITAL_PIN_PMCT_14 	0x00	/* P62	*/
#define DIGITAL_PIN_PMCT_15 	0x00	/* P63	*/
#define DIGITAL_PIN_PMCT_16 	0x20	/* P75	*/
#define DIGITAL_PIN_PMCT_17 	0x10	/* P74	*/
#define DIGITAL_PIN_PMCT_18 	0x08	/* P73	*/
#define DIGITAL_PIN_PMCT_19 	0x04	/* P72	*/
#define DIGITAL_PIN_PMCT_20 	0x02	/* P71	*/
#define DIGITAL_PIN_PMCT_21 	0x01	/* P70	*/
#define DIGITAL_PIN_PMCT_22 	0x20	/* P50	*/
#define DIGITAL_PIN_PMCT_23 	0x02	/* P51	*/
#define DIGITAL_PIN_PMCT_24 	0x04	/* P12	*/
#define DIGITAL_PIN_PMCT_25 	0x02	/* P11	*/
#define DIGITAL_PIN_PMCT_26 	0x04	/* P22	*/
#define DIGITAL_PIN_PMCT_27 	0x02	/* P21	*/
#define DIGITAL_PIN_PMCT_28 	0x01	/* P130	*/
#define DIGITAL_PIN_PMCT_29 	0x00	/* P40	*/
#define DIGITAL_PIN_PMCT_30 	0x00	/* P124	*/
#define DIGITAL_PIN_PMCT_31 	0x00	/* P123	*/
#define DIGITAL_PIN_PMCT_32 	0x80	/* P137	*/
#define DIGITAL_PIN_PMCT_33 	0x00	/* P122	*/
#define DIGITAL_PIN_PMCT_34 	0x02	/* P121	*/
#define DIGITAL_PIN_PMCT_35		0x01	/* P20	*/
#define DIGITAL_PIN_PMCT_36		0x01	/* P60	*/
#define DIGITAL_PIN_PMCT_37		0x02	/* P61	*/
#define DIGITAL_PIN_PMCT_38 	0x80 	/* P147	*/
#define DIGITAL_PIN_PMCT_39 	0x80	/* P27	*/
#define DIGITAL_PIN_PMCT_40 	0x40	/* P26	*/
#define DIGITAL_PIN_PMCT_41 	0x20	/* P25	*/
#define DIGITAL_PIN_PMCT_42 	0x10	/* P24	*/
#define DIGITAL_PIN_PMCT_43 	0x08	/* P23	*/

/* Define Digital Pin PM */
// used for (if (0 != p->pm){)
#define DIGITAL_PIN_PM_0		0x02	/* P01	*/
#define DIGITAL_PIN_PM_1		0x01	/* P00	*/
#define DIGITAL_PIN_PM_2		0x01	/* P140	*/
#define DIGITAL_PIN_PM_3		0x02	/* P31	*/
#define DIGITAL_PIN_PM_4		0x01	/* P120	*/
#define DIGITAL_PIN_PM_5		0x02	/* P41	*/
#define DIGITAL_PIN_PM_6		0x01	/* P10	*/
#define DIGITAL_PIN_PM_7		0x40	/* P146	*/
#define DIGITAL_PIN_PM_8		0x01	/* P30	*/
#define DIGITAL_PIN_PM_9		0x80	/* P17	*/
#define DIGITAL_PIN_PM_10		0x40	/* P16	*/
#define DIGITAL_PIN_PM_11		0x08	/* P13	*/
#define DIGITAL_PIN_PM_12		0x10	/* P14	*/
#define DIGITAL_PIN_PM_13		0x20	/* P15	*/
#define DIGITAL_PIN_PM_14		0x04	/* P62	*/
#define DIGITAL_PIN_PM_15		0x08	/* P63	*/
#define DIGITAL_PIN_PM_16		0x20	/* P75	*/
#define DIGITAL_PIN_PM_17		0x10	/* P74	*/
#define DIGITAL_PIN_PM_18		0x08	/* P73	*/
#define DIGITAL_PIN_PM_19		0x04	/* P72	*/
#define DIGITAL_PIN_PM_20		0x02	/* P71	*/
#define DIGITAL_PIN_PM_21		0x01	/* P70	*/
#define DIGITAL_PIN_PM_22		0x20	/* P50	*/
#define DIGITAL_PIN_PM_23		0x02	/* P51	*/
#define DIGITAL_PIN_PM_24		0x04	/* P12	*/
#define DIGITAL_PIN_PM_25		0x02	/* P11	*/
#define DIGITAL_PIN_PM_26		0x04	/* P22	*/
#define DIGITAL_PIN_PM_27		0x02	/* P21	*/
#define DIGITAL_PIN_PM_28		0x00	/* P130	*/
#define DIGITAL_PIN_PM_29		0x01	/* P40	*/
#define DIGITAL_PIN_PM_30		0x00	/* P124	*/
#define DIGITAL_PIN_PM_31		0x00	/* P123	*/
#define DIGITAL_PIN_PM_32		0x00	/* P137	*/
#define DIGITAL_PIN_PM_33		0x04	/* P122	*/
#define DIGITAL_PIN_PM_34		0x02	/* P121	*/
#define DIGITAL_PIN_PM_35		0x01	/* P20	*/
#define DIGITAL_PIN_PM_36		0x01	/* P60	*/
#define DIGITAL_PIN_PM_37		0x02	/* P61	*/
#define DIGITAL_PIN_PM_38		0x80 	/* P147	*/
#define DIGITAL_PIN_PM_39		0x80	/* P27	*/
#define DIGITAL_PIN_PM_40		0x40	/* P26	*/
#define DIGITAL_PIN_PM_41		0x20	/* P25	*/
#define DIGITAL_PIN_PM_42		0x10	/* P24	*/
#define DIGITAL_PIN_PM_43		0x08	/* P23	*/

/* Define Digital Pin PU */
#define DIGITAL_PIN_PU_0		0x02	/* P01	*/
#define DIGITAL_PIN_PU_1		0x01	/* P00	*/
#define DIGITAL_PIN_PU_2		0x01	/* P140	*/
#define DIGITAL_PIN_PU_3		0x02	/* P31	*/
#define DIGITAL_PIN_PU_4		0x01	/* P120	*/
#define DIGITAL_PIN_PU_5		0x02	/* P41	*/
#define DIGITAL_PIN_PU_6		0x01	/* P10	*/
#define DIGITAL_PIN_PU_7		0x40	/* P146	*/
#define DIGITAL_PIN_PU_8		0x01	/* P30	*/
#define DIGITAL_PIN_PU_9		0x80	/* P17	*/
#define DIGITAL_PIN_PU_10		0x40	/* P16	*/
#define DIGITAL_PIN_PU_11		0x08	/* P13	*/
#define DIGITAL_PIN_PU_12		0x10	/* P14	*/
#define DIGITAL_PIN_PU_13		0x20	/* P15	*/
#define DIGITAL_PIN_PU_14		0x00	/* P62	*/
#define DIGITAL_PIN_PU_15		0x00	/* P63	*/
#define DIGITAL_PIN_PU_16		0x20	/* P75	*/
#define DIGITAL_PIN_PU_17		0x10	/* P74	*/
#define DIGITAL_PIN_PU_18		0x08	/* P73	*/
#define DIGITAL_PIN_PU_19		0x04	/* P72	*/
#define DIGITAL_PIN_PU_20		0x02	/* P71	*/
#define DIGITAL_PIN_PU_21		0x01	/* P70	*/
#define DIGITAL_PIN_PU_22		0x20	/* P50	*/
#define DIGITAL_PIN_PU_23		0x02	/* P51	*/
#define DIGITAL_PIN_PU_24		0x04	/* P12	*/
#define DIGITAL_PIN_PU_25		0x02	/* P11	*/
#define DIGITAL_PIN_PU_26		0x00	/* P22	*/
#define DIGITAL_PIN_PU_27		0x00	/* P21	*/
#define DIGITAL_PIN_PU_28		0x00	/* P130	*/
#define DIGITAL_PIN_PU_29		0x01	/* P40	*/
#define DIGITAL_PIN_PU_30		0x00	/* P124	*/
#define DIGITAL_PIN_PU_31		0x00	/* P123	*/
#define DIGITAL_PIN_PU_32		0x00	/* P137	*/
#define DIGITAL_PIN_PU_33		0x04	/* P122	*/
#define DIGITAL_PIN_PU_34		0x02	/* P121	*/
#define DIGITAL_PIN_PU_35		0x01	/* P20	*/
#define DIGITAL_PIN_PU_36		0x01	/* P60	*/
#define DIGITAL_PIN_PU_37		0x02	/* P61	*/
#define DIGITAL_PIN_PU_38		0x80 	/* P147	*/
#define DIGITAL_PIN_PU_39		0x00	/* P27	*/
#define DIGITAL_PIN_PU_40		0x00	/* P26	*/
#define DIGITAL_PIN_PU_41		0x00	/* P25	*/
#define DIGITAL_PIN_PU_42		0x00	/* P24	*/
#define DIGITAL_PIN_PU_43		0x00	/* P23	*/

/* Define Digital Pin PIM */
#define DIGITAL_PIN_PIM_0		0x02	/* P01	*/
#define DIGITAL_PIN_PIM_1		0x00	/* P00	*/
#define DIGITAL_PIN_PIM_2		0x00	/* P140	*/
#define DIGITAL_PIN_PIM_3		0x00	/* P31	*/
#define DIGITAL_PIN_PIM_4		0x00	/* P120	*/
#define DIGITAL_PIN_PIM_5		0x02	/* P41	*/
#define DIGITAL_PIN_PIM_6		0x01	/* P10	*/
#define DIGITAL_PIN_PIM_7		0x00	/* P146	*/
#define DIGITAL_PIN_PIM_8		0x00	/* P30	*/
#define DIGITAL_PIN_PIM_9		0x80	/* P17	*/
#define DIGITAL_PIN_PIM_10		0x40	/* P16	*/
#define DIGITAL_PIN_PIM_11		0x08	/* P13	*/
#define DIGITAL_PIN_PIM_12		0x10	/* P14	*/
#define DIGITAL_PIN_PIM_13		0x20	/* P15	*/
#define DIGITAL_PIN_PIM_14		0x00	/* P62	*/
#define DIGITAL_PIN_PIM_15		0x00	/* P63	*/
#define DIGITAL_PIN_PIM_16		0x00	/* P75	*/
#define DIGITAL_PIN_PIM_17		0x00	/* P74	*/
#define DIGITAL_PIN_PIM_18		0x00	/* P73	*/
#define DIGITAL_PIN_PIM_19		0x00	/* P72	*/
#define DIGITAL_PIN_PIM_20		0x00	/* P71	*/
#define DIGITAL_PIN_PIM_21		0x00	/* P70	*/
#define DIGITAL_PIN_PIM_22		0x00	/* P50	*/
#define DIGITAL_PIN_PIM_23		0x00	/* P51	*/
#define DIGITAL_PIN_PIM_24		0x00	/* P12	*/
#define DIGITAL_PIN_PIM_25		0x02	/* P11	*/
#define DIGITAL_PIN_PIM_26		0x00	/* P22	*/
#define DIGITAL_PIN_PIM_27		0x00	/* P21	*/
#define DIGITAL_PIN_PIM_28		0x00	/* P130	*/
#define DIGITAL_PIN_PIM_29		0x00	/* P40	*/
#define DIGITAL_PIN_PIM_30		0x00	/* P124	*/
#define DIGITAL_PIN_PIM_31		0x00	/* P123	*/
#define DIGITAL_PIN_PIM_32		0x00	/* P137	*/
#define DIGITAL_PIN_PIM_33		0x00	/* P122	*/
#define DIGITAL_PIN_PIM_34		0x00	/* P121	*/
#define DIGITAL_PIN_PIM_35		0x01	/* P20	*/
#define DIGITAL_PIN_PIM_36		0x00	/* P60	*/
#define DIGITAL_PIN_PIM_37		0x00	/* P61	*/
#define DIGITAL_PIN_PIM_38		0x00 	/* P147	*/
#define DIGITAL_PIN_PIM_39		0x00	/* P27	*/
#define DIGITAL_PIN_PIM_40		0x00	/* P26	*/
#define DIGITAL_PIN_PIM_41		0x00	/* P25	*/
#define DIGITAL_PIN_PIM_42		0x00	/* P24	*/
#define DIGITAL_PIN_PIM_43		0x00	/* P23	*/

/* Define Digital Pin POM */
#define DIGITAL_PIN_POM_0		0x01	/* P01	*/
#define DIGITAL_PIN_POM_1		0x00	/* P00	*/
#define DIGITAL_PIN_POM_2		0x00	/* P140	*/
#define DIGITAL_PIN_POM_3		0x00	/* P31	*/
#define DIGITAL_PIN_POM_4		0x01	/* P120	*/
#define DIGITAL_PIN_POM_5		0x00	/* P41	*/
#define DIGITAL_PIN_POM_6		0x01	/* P10	*/
#define DIGITAL_PIN_POM_7		0x00	/* P146	*/
#define DIGITAL_PIN_POM_8		0x00	/* P30	*/
#define DIGITAL_PIN_POM_9		0x80	/* P17	*/
#define DIGITAL_PIN_POM_10		0x00	/* P16	*/
#define DIGITAL_PIN_POM_11		0x08	/* P13	*/
#define DIGITAL_PIN_POM_12		0x10	/* P14	*/
#define DIGITAL_PIN_POM_13		0x20	/* P15	*/
#define DIGITAL_PIN_POM_14		0x00	/* P62	*/
#define DIGITAL_PIN_POM_15		0x00	/* P63	*/
#define DIGITAL_PIN_POM_16		0x00	/* P75	*/
#define DIGITAL_PIN_POM_17		0x10	/* P74	*/
#define DIGITAL_PIN_POM_18		0x00	/* P73	*/
#define DIGITAL_PIN_POM_19		0x04	/* P72	*/
#define DIGITAL_PIN_POM_20		0x02	/* P71	*/
#define DIGITAL_PIN_POM_21		0x00	/* P70	*/
#define DIGITAL_PIN_POM_22		0x20	/* P50	*/
#define DIGITAL_PIN_POM_23		0x00	/* P51	*/
#define DIGITAL_PIN_POM_24		0x04	/* P12	*/
#define DIGITAL_PIN_POM_25		0x02	/* P11	*/
#define DIGITAL_PIN_POM_26		0x00	/* P22	*/
#define DIGITAL_PIN_POM_27		0x00	/* P21	*/
#define DIGITAL_PIN_POM_28		0x00	/* P130	*/
#define DIGITAL_PIN_POM_29		0x00	/* P40	*/
#define DIGITAL_PIN_POM_30		0x00	/* P124	*/
#define DIGITAL_PIN_POM_31		0x00	/* P123	*/
#define DIGITAL_PIN_POM_32		0x00	/* P137	*/
#define DIGITAL_PIN_POM_33		0x00	/* P122	*/
#define DIGITAL_PIN_POM_34		0x00	/* P121	*/
#define DIGITAL_PIN_POM_35		0x00	/* P20	*/
#define DIGITAL_PIN_POM_36		0x00	/* P60	*/
#define DIGITAL_PIN_POM_37		0x00	/* P61	*/
#define DIGITAL_PIN_POM_38		0x00 	/* P147	*/
#define DIGITAL_PIN_POM_39		0x00	/* P27	*/
#define DIGITAL_PIN_POM_40		0x00	/* P26	*/
#define DIGITAL_PIN_POM_41		0x00	/* P25	*/
#define DIGITAL_PIN_POM_42		0x00	/* P24	*/
#define DIGITAL_PIN_POM_43		0x00	/* P23	*/

#define PWM_PIN_11			0xE0	// Software PWM0
#define PWM_PIN_22			0xE1	// Software PWM1
#define PWM_PIN_23			0xE2	// Software PWM2

#define SWPWM_PIN			0xE0
#define PWM_PIN_3			3		// TO3
#define PWM_PIN_6			6		// TO7
#define PWM_PIN_12			12		// TO3
#define PWM_PIN_25			25		// TO6
#define PWM_PIN_24			24		// TO5
#define PWM_PIN_9			9		// TO2
#define PWM_PIN_10			10		// TO1
#define PWM_PIN_5			5		// TO7

#define PWM_PIN_31			31		// TO2
#define PWM_PIN_32			32		// TO1

/* Define Serial Port Number */
#define SERIAL_TXD0			24 // P12
#define SERIAL_RXD0			25 // P11

#define SERIAL_TXD1			1  // P00
#define SERIAL_RXD1			0  // P01

#define SERIAL_TXD2			11 // P13
#define SERIAL_RXD2			12 // P14
// 20240617
#define SERIAL_TXD3			19 // P72 TxDA0
#define SERIAL_RXD3			17 // P71 RxDA0
/* Define Serial Port Number */

#endif // # _PINS_VARIANT_H_
