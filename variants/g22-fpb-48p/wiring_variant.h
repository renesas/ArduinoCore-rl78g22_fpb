#ifndef WiringVariante_h
#define WiringVariante_h

#include <stdio.h>
#include <stdarg.h>
#include "Arduino.h"
#include "utilities.h"

#ifdef __cplusplus
extern "C"{
#endif

#define ANALOG_PIN_START_NUMBER	(38)
#define MAX_CYCLIC_HANDLER 		(8)
#define EXTERNAL_NUM_INTERRUPTS (4)

/* PWM defines. */
#define PWM_MIN			0
#define PWM_MAX			255

/* External interrupt define. */
#define EXTERNAL_INTERRUPT_0	2
#define EXTERNAL_INTERRUPT_1	3
#define EXTERNAL_INTERRUPT_2	10
#define EXTERNAL_INTERRUPT_3    32

#define	PWM_CH_NUM	(4)

#define FREQUENCY_MIN_VAL	(500)
#define FREQUENCY_MAX_VAL	(8000000)

/* pulseIn define. */
#define PULSEIN_CLOCK_CYCLE 29

#ifdef __cplusplus
} // extern "C"
#endif


//extern uint32_t R_BSP_GetFclkFreqHz(void);
#endif /* WiringVariante_h */

