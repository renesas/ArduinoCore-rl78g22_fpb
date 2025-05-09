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
* Copyright (C) 2021, 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : Config_IIC01.c
* Component Version: 1.6.0
* Device(s)        : R7F102GGExFB
* Description      : This file implements device driver for Config_IIC01.
* Creation Date    : 
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "Config_IIC01.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"


/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint8_t   g_iic01_master_status_flag;    /* iic01 start flag for send address check */
volatile uint8_t   g_iica01_master_status_flag;    /* iic01 master flag */
volatile uint8_t * gp_iic01_tx_address;           /* iic01 send data pointer by master mode */
volatile uint16_t  g_iic01_tx_cnt;              /* iic01 send data size by master mode */
volatile uint8_t * gp_iic01_rx_address;           /* iic01 receive data pointer by master mode */
volatile uint16_t  g_iic01_rx_cnt;              /* iic01 receive data size by master mode */
uint16_t  g_iic01_rx_len;                      /* iic01 receive data length by master mode */
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_IIC01_Create
* Description  : This function initializes the IIC01 master module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC01_Create(void)
{
    SPS0 &= _00F0_SAU_CK00_CLEAR;
    SPS0 |= _0002_SAU_CK00_FCLK_2;
    ST0 |= _0002_SAU_CH1_STOP_TRG_ON;
    IICMK01 = 1U;    /* disable INTIIC01 interrupt */
    IICIF01 = 0U;    /* clear INTIIC01 interrupt flag */
    /* Set INTIIC01 low priority */
    IICPR101 = 1U;
    IICPR001 = 1U;
    SIR01 = _0004_SAU_SIRMN_FECTMN | _0002_SAU_SIRMN_PECTMN | _0001_SAU_SIRMN_OVCTMN;    /* clear error flag */
    SMR01 = _0020_SAU_SMRMN_INITIALVALUE | _0000_SAU_CLOCK_SELECT_CK00 | _0000_SAU_CLOCK_MODE_CKS | 
            _0000_SAU_TRIGGER_SOFTWARE | _0000_SAU_EDGE_FALL | _0004_SAU_MODE_IIC | _0000_SAU_TRANSFER_END;
    SCR01 = _0004_SAU_SCRMN_INITIALVALUE | _0000_SAU_TIMING_1 | _0000_SAU_INTSRE_MASK | _0000_SAU_PARITY_NONE | 
            _0000_SAU_MSB | _0010_SAU_STOP_1 | _0003_SAU_LENGTH_8;
    SDR01 = _4E00_IIC01_DIVISOR;
    SO0 |= (_0200_SAU_CH1_CLOCK_OUTPUT_1 | _0002_SAU_CH1_DATA_OUTPUT_1);
    /* Set SCL01, SDA01 pin */
    POM7 |= 0x10U;
    PMCT7 &= 0xCFU;
    PFOE1 |= 0x08U;
    P7 |= 0x30U;
    PM7 &= 0xCFU;

    R_Config_IIC01_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC01_Stop
* Description  : This function stops the IIC01 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC01_Stop(void)
{
    IICMK01 = 1U;    /* disable INTIIC01 interrupt */
    ST0 |= _0002_SAU_CH1_STOP_TRG_ON;
    IICIF01 = 0U;    /* clear INTIIC01 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC01_StartCondition
* Description  : This function starts the IIC01 condition.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC01_StartCondition(void)
{
    volatile uint8_t w_count;

    SO0 &= (uint16_t)~_0002_SAU_CH1_DATA_OUTPUT_1;    /* clear IIC01 SDA */

    /* Set delay to secure a hold time after SDA output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC01_WAITTIME; w_count++ )
    {
        NOP();
    }

    SO0 &= (uint16_t)~_0200_SAU_CH1_CLOCK_OUTPUT_1;    /* clear IIC01 SCL */
    SOE0 |= _0002_SAU_CH1_OUTPUT_ENABLE;    /* enable IIC01 output */
    SS0 |= _0002_SAU_CH1_START_TRG_ON;    /* enable IIC01 */

    /* Set delay to secure a hold time after SCL output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC01_WAITTIME; w_count++ )
    {
        NOP();
    }
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC01_StopCondition
* Description  : This function stops the IIC01 condition.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC01_StopCondition(void)
{
    volatile uint8_t w_count;

    ST0 |= _0002_SAU_CH1_STOP_TRG_ON;    /* disable IIC01 */
    SOE0 &= (uint16_t)~_0002_SAU_CH1_OUTPUT_ENABLE;    /* disable IIC01 output */
    SO0 &= (uint16_t)~_0002_SAU_CH1_DATA_OUTPUT_1;    /* clear IIC01 SDA */

    /* Set delay to secure a hold time after SDA output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC01_WAITTIME; w_count++ )
    {
        NOP();
    }

    SO0 |= _0200_SAU_CH1_CLOCK_OUTPUT_1;    /* set IIC01 SCL */

    /* Set delay to secure a hold time after SCL output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC01_WAITTIME; w_count++ )
    {
        NOP();
    }

    SO0 |= _0002_SAU_CH1_DATA_OUTPUT_1;    /* set IIC01 SDA */

    /* Set delay to secure a hold time after SDA output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC01_WAITTIME; w_count++ )
    {
        NOP();
    }
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC01_Master_Send
* Description  : This function starts transferring data for IIC01 in master mode.
* Arguments    : adr -
*                    set address for select slave
*                tx_buf -
*                    transfer buffer pointer
*                tx_num -
*                    buffer size
* Return Value : None
***********************************************************************************************************************/
MD_STATUS R_Config_IIC01_Master_Send(uint8_t adr, uint8_t * const tx_buf, uint16_t tx_num, uint8_t wait)
{
	MD_STATUS status = MD_OK;
    g_iic01_master_status_flag = _00_SAU_IIC_MASTER_FLAG_CLEAR;    /* clear IIC01 master status flag */
    adr &= 0xFEU;    /* send mode */
    g_iic01_master_status_flag = _01_SAU_IIC_SEND_FLAG;    /* set master status flag */
    SCR01 &= (uint16_t)~_C000_SAU_RECEPTION_TRANSMISSION;
    SCR01 |= _8000_SAU_TRANSMISSION;
    /* Set paramater */
    g_iic01_tx_cnt = tx_num;
    gp_iic01_tx_address = tx_buf;
    /* Start condition */
    R_Config_IIC01_StartCondition();
    IICIF01 = 0U;    /* clear INTIIC01 interrupt flag */
    IICMK01 = 0U;    /* enable INTIIC01 */
    SIO01 = adr;
    g_iica01_master_status_flag = _00_IICA_MASTER_FLAG_CLEAR;
       return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC01_Master_Receive
* Description  : This function starts receiving data for IIC01 in master mode.
* Arguments    : adr -
*                    set address for select slave
*                rx_buf -
*                    receive buffer pointer
*                rx_num -
*                    buffer size
* Return Value : None
***********************************************************************************************************************/
MD_STATUS R_Config_IIC01_Master_Receive(uint8_t adr, uint8_t * const rx_buf, uint16_t rx_num, uint8_t wait)
{
	MD_STATUS status = MD_OK;
    g_iic01_master_status_flag = _00_SAU_IIC_MASTER_FLAG_CLEAR;    /* clear master status flag */
    adr |= 0x01U;    /* receive mode */
    g_iic01_master_status_flag = _02_SAU_IIC_RECEIVE_FLAG;    /* set master status flag */
    SCR01 &= (uint16_t)~_C000_SAU_RECEPTION_TRANSMISSION;
    SCR01 |= _8000_SAU_TRANSMISSION;
    /* Set parameter */
    g_iic01_rx_len = rx_num;
    g_iic01_rx_cnt = 0U;
    gp_iic01_rx_address = rx_buf;
    /* Start condition */
    R_Config_IIC01_StartCondition();
    IICIF01 = 0U;    /* clear INTIIC01 interrupt flag */
    IICMK01 = 0U;    /* enable INTIIC01 */
    SIO01 = adr;
    g_iica01_master_status_flag = _00_IICA_MASTER_FLAG_CLEAR;
    return (status);
}

/* Start user code for adding. Do not edit comment generated here */
/**********************************************************************************************************************
 * Function Name: R_Config_IIC01_Master_SetClock
 * Description  : This function sets the I2C clock frequency for IIC01 on RL78/G22 (48-pin)
 * Arguments    : clock - Clock frequency to set
 *              :   The given frequency is normalized to one of the following:
 *              :     I2C_CLOCK_FAST_PLUS = 1,000,000 Hz (Fast mode plus)
 *              :     I2C_CLOCK_FAST      =   400,000 Hz (Fast mode)
 *              :     I2C_CLOCK_STANDARD  =   100,000 Hz (Standard mode)
 *              :   If the given frequency is lower than all of the above,
 *              :   it is considered as the lowest clock (100,000 Hz).
 * Return Value : None
 *********************************************************************************************************************/
void R_Config_IIC01_Master_SetClock(uint32_t clock) {
    uint32_t fclk_frequency;
    uint32_t peri_clk;
    uint16_t tmp_sdr;
    fclk_frequency = R_BSP_GetFclkFreqHz();/* Get system clock frequency */
    peri_clk = fclk_frequency / 4;/* Peripheral clock is Fclk / 4 */
    tmp_sdr = (uint16_t)((peri_clk / clock - 1) << 8);/* Calculate SDR register value */
    /* Set SDR register for IIC01 */
    if (tmp_sdr > 0) {
        SDR01 = tmp_sdr & 0xFF00;
    } else {
        SDR01 = 0x0200;  /* Default to 100kHz if the calculated value is invalid */
    }
}
/* End user code. Do not edit comment generated here */

