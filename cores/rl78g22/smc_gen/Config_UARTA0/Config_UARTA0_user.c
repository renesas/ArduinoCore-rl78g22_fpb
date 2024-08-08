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
* File Name        : Config_UARTA0_user.c
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
extern volatile uint16_t g_uarta0_rx_total_num;
extern volatile uint8_t * gp_uarta0_rx_address;
extern volatile uint16_t g_uarta0_rx_num;
extern volatile uint8_t * gp_uarta0_tx_address;
extern volatile uint16_t g_uarta0_tx_count;
/* Start user code for global. Do not edit comment generated here */
void Set_Char_Serial_to_buf(uint8_t chn);
void Set_Char_Serial_from_buf(uint8_t chn);
extern fInterruptFunc_t uart_receive_callback_table[UART_TOTAL_NUM] __attribute__((weak));
extern fInterruptFunc_t uart_transmit_callback_table[UART_TOTAL_NUM] __attribute__((weak));
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_UARTA0_Create_UserInit
* Description  : This function adds user code after initializing UARTA0.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA0_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UARTA0_callback_sendend
* Description  : This function is a callback function when UARTA0 finishes transmission.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_UARTA0_callback_sendend(void)
{
    /* Start user code for r_Config_UARTA0_callback_sendend. Do not edit comment generated here */
	Set_Char_Serial_from_buf(3);
    if(0 != uart_transmit_callback_table[3])
    {
        (*uart_transmit_callback_table[3])();
    }
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UARTA0_callback_receiveend
* Description  : This function is a callback function when UARTA0 finishes reception.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_UARTA0_callback_receiveend(void)
{
    /* Start user code for r_Config_UARTA0_callback_receiveend. Do not edit comment generated here */
	Set_Char_Serial_to_buf(3);
    if(0 != uart_receive_callback_table[3])
    {
        (*uart_receive_callback_table[3])();
    }
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UARTA0_callback_error
* Description  : This function is a callback function when UARTA0 reception error occurs.
* Arguments    : err_type -
*                     error type value
* Return Value : None
***********************************************************************************************************************/
static void r_Config_UARTA0_callback_error(uint8_t err_type)
{
    /* Start user code for r_Config_UARTA0_callback_error. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UARTA0_interrupt_send
* Description  : This function is UARTA0 send interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UARTA0_interrupt_send(void)
{
    if (g_uarta0_tx_count > 0U)
    {
        TXBA0 = *gp_uarta0_tx_address;
        gp_uarta0_tx_address++;
        g_uarta0_tx_count--;
    }
    else if (0U != (ASIMA00 & _02_UARTA_BUFFER_EMPTY))
    {
        ISSMA0 = 0U;
    }
    else
    {
        r_Config_UARTA0_callback_sendend();
    }
}

/***********************************************************************************************************************
* Function Name: r_Config_UARTA0_interrupt_receive
* Description  : This function is UARTA0 receive interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UARTA0_interrupt_receive(void)
{
    uint16_t temp;

    temp = g_uarta0_rx_total_num;

    if (temp > g_uarta0_rx_num)
    {
        *gp_uarta0_rx_address = RXBA0;
        gp_uarta0_rx_address++;
        g_uarta0_rx_num++;
    }

    temp = g_uarta0_rx_total_num;

    if (temp == g_uarta0_rx_num)
    {
        r_Config_UARTA0_callback_receiveend();
    }
}

/***********************************************************************************************************************
* Function Name: r_Config_UARTA0_interrupt_error
* Description  : This function is UARTA0 error interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UARTA0_interrupt_error(void)
{
    uint8_t err_type;

    err_type = (ASISA0 & (_04_UARTA_PARITY_ERROR_DETECTED | _02_UARTA_FRAME_ERROR_DETECTED | 
               _01_UARTA_OVERRUN_ERROR_DETECTED));
    *gp_uarta0_rx_address = RXBA0;
    ASCTA0 |= (_04_UARTA_PARITY_FLAG_CLEAR | _02_UARTA_FRAME_FLAG_CLEAR | _01_UARTA_OVERRUN_FLAG_CLEAR);
    r_Config_UARTA0_callback_error(err_type);
}

/* Start user code for adding. Do not edit comment generated here */

/* End user code. Do not edit comment generated here */

