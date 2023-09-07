/*
  Author:  Mohamed Zaki
  Data:    17-8-2021
  Version: 1.00
*/

#ifndef HAL_KEYPAD_KEYPAD_CONFIG_H_
#define HAL_KEYPAD_KEYPAD_CONFIG_H_

#include <avr/io.h>

/***************************************************************************************************/
/*****************************************Define Data Types*****************************************/

//	Keypad port Configuration
#define KEYPAD_PORT_DIR		DDRA
#define KEYPAD_PORT_OUT		PORTA
#define KEYPAD_PORT_IN		PINA

//	Keypad Configuration for Rows & ColumnS
#define	N_ROW 4
#define N_COL 4

#endif
