#include <Arduino.h>
#include "utilities.h"
extern "C" {
    #include "r_smc_entry.h"
}

extern "C" {
}

/* This declaration is used to force the constant in
 * r_cg_vect_table.c to be linked to the static library (*.a). */
extern const unsigned char Option_Bytes[];
void * p_force_link = (void * )Option_Bytes;

int main(void)
{
/******************************************************/
    interrupts();                /* Enable Interrupt */
    _readResetFlag();           /* Read causes of reset */

/* Start Interval Timer */
#if defined(G22_FPB) || defined(G23_FPB)
    R_Config_ITL000_Create();    /* Create 1ms Interval Timer */
    R_Config_ITL000_Start();    /* Start 1ms Interval Timer */
    R_ITL_Start_Interrupt();    /* Start ITL Interrupt */
#elif defined(G16_FPB)
    R_Config_IT_Create();    /* Create 1ms Interval Timer */
    R_Config_IT_Start();    /* Start 1ms Interval Timer */
#endif

    R_Config_TAU0_6_Micros_Create();
    R_Config_TAU0_6_Micros_Start();

    /* Start RTC Timer */
#if defined(G22_FPB) || defined(G23_FPB)
    R_Config_RTC_Start();
    delayMicroseconds(62);    /* Wait more than 2 clocks of fRTCCK */
    R_Config_ITL013_SetCompareMatch(0x20, 0x0);
    R_Config_ITL013_Start();
#endif

/* Power Off unused Peripheral */
/* SERIAL ARRAY UNIT (SAU) */
#if !defined(UART_CHANNEL) & (UART1_CHANNEL == 0) & !defined(CSI_CHANNEL)
    R_SAU0_Set_Reset();
    R_SAU0_Set_PowerOff();
#endif
#if !defined(UART1_CHANNEL) || UART1_CHANNEL == 0
    R_Config_UART1_Stop();
#endif

#if !defined(UART2_CHANNEL) || (UART2_CHANNEL == 0)
    R_SAU1_Set_Reset();
    R_SAU1_Set_PowerOff();
#endif

/* IICA UNIT(IICA*) */
#if !defined(IIC_CHANNEL0) | (IIC_CHANNEL0!=0)
    R_IICA0_Set_Reset();
    R_IICA0_Set_PowerOff();
#endif

#if WDT_EN==1
    R_Config_WDT_Start();
#endif
#if defined(G22_FPB) || defined(G23_FPB)
    setPowerManagementMode(PM_NORMAL_MODE);
#endif // defined(G22_FPB) || defined(G23_FPB)

    SOE0 &= 0xf3;
    SO0 |= 0x08;
// added for safety reason for G22, These pins are not available
#if defined(G22_FPB)
    /* P26,P25,P24,P23,P22 */
    PMCA2 &= 0x83;  /* 0 : Use Digital IO */
    PMCT2 &= 0x83;  /* 0 : Use Digital IO */
    PM2 &= 0x83;    /* 0 : Use Output Mode */
    P2 &= 0x83;     /* 0 : Use Output Low  */

    /* P30 */
    PMCT3 &= 0xFE;  /* 0 : Use Digital IO */
    PM3 &= 0xFE;    /* 0 : Use Output Mode */
    P3 &= 0xFE;     /* 0 : Use Output Low  */
#elif defined(G16_FPB)
    /* P07,P06,P02 */
    POM0 &= 0x3B;   /* 0 : Use Digital IO */
    PMC0 &= 0x3B;   /* 0 : Use Digital IO */
    PM0 &= 0x3B;    /* 0 : Use Output Mode */
    P0 &= 0x3B;     /* 0 : Use Output Low  */
    TSSEL0 &= 0x3F; /* 0 : Use function other than touch terminal */

    /* P23,P22 */
    POM2 &= 0xF3;   /* 0 : Use Digital IO */
    PMC2 &= 0xF3;   /* 0 : Use Digital IO */
    PM2 &= 0xF3;    /* 0 : Use Output Mode */
    P2 &= 0xF3;     /* 0 : Use Output Low  */
    TSSEL1 &= 0x7C; /* 0 : Use function other than touch terminal */

    /* P42 */
    PM4 &= 0xFB;    /* 0 : Use Output Mode */
    P4 &= 0xFB;     /* 0 : Use Output Low  */
    TSSEL1 &= 0x6F; /* 0 : Use function other than touch terminal */
#endif

/******************************************************/
    
    setup();
    
    for (;;) {
        loop();
    }
    return 0;
}

/**
 * Finish Function
 *
 * RLduino78 Framework finish
 *  *
 * @return None
 *
 * @attention No return
 ***************************************************************************/
#include <stdlib.h>

void abort(void)
{
    for(;;);
}

void exit(int) __attribute__ ((weak, alias ("abort")));

#include <exception>

