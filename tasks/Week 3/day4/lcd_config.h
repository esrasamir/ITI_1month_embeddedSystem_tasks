/*
 * lcd_config.h
 *
 *  Created on: 21 Aug 2022
 *      Author: Esraa Samir
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_
#include "dio.h"

/****************
 *  USER CONFIG
 ****************/
#define LCD_DATA_PORT DIO_PORTD
#define LCD_RS_PORT   DIO_PORTC
#define LCD_RS_PIN    DIO_PIN0
#define LCD_EN_PORT   DIO_PORTC
#define LCD_EN_PIN    DIO_PIN1



#endif /* LCD_CONFIG_H_ */
