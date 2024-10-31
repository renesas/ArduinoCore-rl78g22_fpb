#include "pins_variant.h"
#include "wiring_private.h"
#include "wiring_variant.h"
#include "r_smc_entry.h"


volatile unsigned short *g_timer_period_reg[PWM_CH_NUM] = {&TDR00,&TDR00,&TDR00,&TDR00};
volatile unsigned short *g_timer_duty_reg[PWM_CH_NUM]   = {&TDR01,&TDR02,&TDR03,&TDR07};
volatile unsigned short *g_timer_analog_mode_reg[PWM_CH_NUM] = {&TMR01,&TMR02,&TMR03,&TMR07};
volatile unsigned short *g_timer_analog_clock_select_reg = &TPS0;
const uint8_t  pwm_channel_table[PWM_CH_NUM]  = {PWM_PIN_10,PWM_PIN_9,PWM_PIN_3,PWM_PIN_5};

const uint8_t g_au8AnalogPinTable[NUM_ANALOG_INPUTS] = {ANALOG_PIN_0, ANALOG_PIN_1};
const uint8_t g_analog_pin_input[NUM_ANALOG_INPUTS] = {PIN_A0, PIN_A1};

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
