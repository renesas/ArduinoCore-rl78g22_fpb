/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

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

#include "pins_variant.h"
#include "wiring_private.h"
#include "wiring_variant.h"
#include "r_smc_entry.h"

// 2023/02/22 moved from wiring_analog.c
volatile unsigned short *g_timer_period_reg[PWM_CH_NUM] = {&TDR00,&TDR00,&TDR00,&TDR00};
volatile unsigned short *g_timer_duty_reg[PWM_CH_NUM]   = {&TDR01,&TDR02,&TDR03,&TDR07};
volatile unsigned short *g_timer_analog_mode_reg[PWM_CH_NUM] = {&TMR01,&TMR02,&TMR03,&TMR07};
volatile unsigned short *g_timer_analog_clock_select_reg = &TPS0;
const uint8_t  pwm_channel_table[PWM_CH_NUM]  = {PWM_PIN_10,PWM_PIN_9,PWM_PIN_3,PWM_PIN_5};

const uint8_t g_au8AnalogPinTable[NUM_ANALOG_INPUTS] = {
ANALOG_PIN_0, ANALOG_PIN_1, ANALOG_PIN_2, ANALOG_PIN_3,
ANALOG_PIN_4, ANALOG_PIN_5, ANALOG_PIN_6, ANALOG_PIN_7};
const uint8_t g_analog_pin_input[NUM_ANALOG_INPUTS] = {PIN_A0, PIN_A1, PIN_A2, PIN_A3, PIN_A4, PIN_A5, PIN_A6, PIN_A7};

Pwm_func pwm_ch[PWM_CH_NUM] =
{
    {
		.open  = (void*)R_Config_TAU0_0_PWM_Create,
		.open_slave  = (void*)R_Config_TAU0_1_PWM_Create,
		.start  = (void*)R_Config_TAU0_0_PWM_Start,
		.start_slave = (void*)R_Config_TAU0_01_PWM_Start,
		.stop_slave = (void*)R_Config_TAU0_01_PWM_Stop,
		.enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
		.cycle = CYCLE_VALUE,
    },
    {
		.open  = (void*)R_Config_TAU0_0_PWM_Create,
		.open_slave  = (void*)R_Config_TAU0_2_PWM_Create,
		.start  = (void*)R_Config_TAU0_0_PWM_Start,
		.start_slave = (void*)R_Config_TAU0_02_PWM_Start,
		.stop_slave = (void*)R_Config_TAU0_02_PWM_Stop,
		.enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
		.cycle = CYCLE_VALUE,
    },
    {
		.open  = (void*)R_Config_TAU0_0_PWM_Create,
		.open_slave  = (void*)R_Config_TAU0_3_PWM_Create,
		.start  = (void*)R_Config_TAU0_0_PWM_Start,
		.start_slave = (void*)R_Config_TAU0_03_PWM_Start,
		.stop_slave = (void*)R_Config_TAU0_03_PWM_Stop,
		.enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
		.cycle = CYCLE_VALUE,
    },
	{
		.open  = (void*)R_Config_TAU0_0_PWM_Create,
		.open_slave  = (void*)R_Config_TAU0_7_PWM_Create,
		.start  = (void*)R_Config_TAU0_0_PWM_Start,
		.start_slave = (void*)R_Config_TAU0_07_PWM_Start,
		.stop_slave = (void*)R_Config_TAU0_07_PWM_Stop,
		.enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
		.cycle = CYCLE_VALUE,
    }
};
