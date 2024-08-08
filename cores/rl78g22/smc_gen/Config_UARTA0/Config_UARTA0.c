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
* File Name        : Config_UARTA0.c
* Component Version: 1.6.0
* Device(s)        : R7F102GGExFB
* Description      : This file implements device driver for Config_UARTA0.
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
#include "Config_UARTA0.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint16_t g_uarta0_rx_total_num;
volatile uint8_t * gp_uarta0_rx_address;
volatile uint16_t g_uarta0_rx_num;
volatile uint8_t * gp_uarta0_tx_address;
volatile uint16_t g_uarta0_tx_count;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Create
* Description  : This function initializes the UARTA0 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA0_Create(void)
{
    UARTAEN0 = 0U;
    UTMK0 = 1U;    /* disable INTUT0 interrupt */
    UTIF0 = 0U;    /* clear INTUT0 interrupt flag */
    URMK0 = 1U;    /* disable INTUR0 interrupt */
    URIF0 = 0U;    /* clear INTUR0 interrupt flag */
    UREMK0 = 1U;    /* disable INTURE0 interrupt */
    UREIF0 = 0U;    /* clear INTURE0 interrupt flag */
    /* Set INTUT0 level2 priority */
    UTPR10 = 1U;
    UTPR00 = 0U;
    /* Set INTUR0 low priority */
    URPR10 = 1U;
    URPR00 = 1U;
    /* Set INTURE0 low priority */
    UREPR10 = 1U;
    UREPR00 = 1U;
    BRGCA0 = _09_UARTA_OUTPUT_BAUDRATE;
    ASIMA01 = _00_UARTA_PARITY_NONE | _18_UARTA_TRANSFER_LENGTH_8 | _00_UARTA_STOP_BIT_1 | _02_UARTA_DIRECTION_LSB | 
              _00_UARTA_DATA_NORMAL;
    ASIMA00 = _02_UARTA_BUFFER_EMPTY | _00_UARTA_INTURE_OCCUR;
    UTA0CK = _20_UARTA_FSEL_SELECT_FIHP | _04_UARTA0_SELECT_FSEL16;
    /* Set TxDA0 pin */
    PMCT7 &= 0xFBU;
    PFOE1 |= 0x10U;
    P7 |= 0x04U;
    PM7 &= 0xFBU;
    /* Set RxDA0 pin */
    PMCT7 &= 0xFDU;
    PM7 |= 0x02U;

    R_Config_UARTA0_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Start
* Description  : This function starts UARTA0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA0_Start(void)
{
    volatile uint8_t w_count;

    UTIF0 = 0U;    /* clear INTUT0 interrupt flag */
    UTMK0 = 0U;    /* enable INTUT0 interrupt */
    URIF0 = 0U;    /* clear INTUR0 interrupt flag */
    URMK0 = 0U;    /* enable INTUR0 interrupt */
    UREIF0 = 0U;    /* clear INTURE0 interrupt flag */
    UREMK0 = 0U;    /* enable INTURE0 interrupt */
    UARTAEN0 = 1U;
    TXEA0 = 1U;

    /* Wait for the period of at least one cycle of the UARTA operation clock */
    for (w_count = 0U; w_count <= UARTA0_WAIT_1_CLOCK_CYCLE; w_count++)
    {
        NOP();
    }

    RXEA0 = 1U;
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Stop
* Description  : This function stops UARTA0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA0_Stop(void)
{
    UTMK0 = 1U;    /* disable INTUT0 interrupt */
    UTIF0 = 0U;    /* clear INTUT0 interrupt flag */
    URMK0 = 1U;    /* disable INTUR0 interrupt */
    URIF0 = 0U;    /* clear INTUR0 interrupt flag */
    UREMK0 = 1U;    /* disable INTURE0 interrupt */
    UREIF0 = 0U;    /* clear INTURE0 interrupt flag */
    TXEA0 = 0U;
    RXEA0 = 0U;
    UARTAEN0 = 0U;
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Send
* Description  : This function sends UARTA0 data.
* Arguments    : tx_buf -
*                    transfer buffer pointer
*                tx_num -
*                    buffer size
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_UARTA0_Send(uint8_t * const tx_buf, uint16_t tx_num)
{
    MD_STATUS status = MD_OK;

    if (tx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        ISSMA0 = 1U;
        gp_uarta0_tx_address = tx_buf;
        g_uarta0_tx_count = tx_num;
        /* Disable UARTA0 interrupt operation */
        UTMK0 = 1U;
        TXBA0 = *gp_uarta0_tx_address;
        gp_uarta0_tx_address++;
        g_uarta0_tx_count--;
        /* Enable UARTA0 interrupt operation */
        UTMK0 = 0U;
    }

    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Receive
* Description  : This function receives UARTA0 data.
* Arguments    : rx_buf -
*                    receive buffer pointer
*                rx_num -
*                    buffer size
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_UARTA0_Receive(uint8_t * const rx_buf, uint16_t rx_num)
{
    MD_STATUS status = MD_OK;

    if (rx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        /* Set receive setting */
        g_uarta0_rx_total_num = rx_num;
        gp_uarta0_rx_address = rx_buf;
        g_uarta0_rx_num = 0U;
    }

    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Loopback_Enable
* Description  : This function enables the UARTA0 loopback function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA0_Loopback_Enable(void)
{
    ULBS4 = 1U;
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Loopback_Disable
* Description  : This function disables the UARTA0 loopback function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA0_Loopback_Disable(void)
{
    ULBS4 = 0U;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

