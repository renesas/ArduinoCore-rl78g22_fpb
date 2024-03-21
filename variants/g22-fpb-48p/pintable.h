/*
  pintable.h
  Copyright (c) 2015 Nozomu Fujita. All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifndef _PINTABLE_H_
#define _PINTABLE_H_

// #include <pins_arduino.h>
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

#define getPortModeRegisterAddr(port)		    ((volatile uint8_t*)(ADDR_PORT_MODE_REG + port))			/*!< Base Address of Port Mode Register	*/
#define getPortPullUpRegisterAddr(port)		    ((volatile uint8_t*)(ADDR_PORT_PULL_UP_REG + port))			/*!< Base Address of Port Pull-up Register	*/
#define getPortInputModeRegisterAddr(port)	    ((volatile uint8_t*)(ADDR_PORT_IN_MODE_REG + port))			/*!< Base Address of Port Input Mode Register	*/
#define getPortOutputModeRegisterAddr(port)	    ((volatile uint8_t*)(ADDR_PORT_OUT_MODE_REG + port))		/*!< Base Address of Port Output Mode Register	*/
#define getPortRegisterAddr(port)		        ((volatile uint8_t*)(ADDR_PORT_REG + port))					/*!< Base Address of Port Register	*/
#define getPortModeControlARegisterAddr(port)	((volatile uint8_t*)(ADDR_PORT_MODE_CONTROL_A_REG + port))	/*!< Base Address of Port Mode Control-A Register	*/
#define getPortModeControlTRegisterAddr(port)	((volatile uint8_t*)(ADDR_PORT_MODE_CONTROL_T_REG + port))	/*!< Base Address of Port Mode Control-T Register	*/

typedef struct {
	uint8_t mask;
	uint8_t bit;
	uint8_t timer;
	uint8_t pmca;
	uint8_t pmct;
	uint8_t pm;
	uint8_t pu;
	uint8_t pim;
	uint8_t pom;
	volatile uint8_t* portModeRegisterAddr;
	volatile uint8_t* portPullUpRegisterAddr;
	volatile uint8_t* portInputModeRegisterAddr;
	volatile uint8_t* portOutputModeRegisterAddr;
	volatile uint8_t* portRegisterAddr;
	volatile uint8_t* portModeControlARegisterAddr;
	volatile uint8_t* portModeControlTRegisterAddr;
} PinTableType;

#ifdef __cplusplus
};
#endif

#endif/*_PINTABLE_H_*/
