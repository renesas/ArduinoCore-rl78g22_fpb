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
* File Name    : Config_UART0.h
* Version      : 1.2.0
* Device(s)    : R7F102GGExFB
* Description  : This file implements device driver for Config_UART0.
* Creation Date: 
***********************************************************************************************************************/

#ifndef CFG_Config_UART0_H
#define CFG_Config_UART0_H

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_sau.h"

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#define _1000_SAU0_CH0_TRANSMIT_DIVISOR    (0x1000U)
#define _1000_SAU0_CH1_RECEIVE_DIVISOR    (0x1000U)

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Config_UART0_Create (void);
void R_Config_UART0_Start (void);
void R_Config_UART0_Stop (void);
MD_STATUS R_Config_UART0_Send (uint8_t * const tx_buf, uint16_t tx_num);
MD_STATUS R_Config_UART0_Receive (uint8_t * const rx_buf, uint16_t rx_num);
void R_Config_UART0_Loopback_Enable (void);
void R_Config_UART0_Loopback_Disable (void);
void R_Config_UART0_Create_UserInit (void);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
