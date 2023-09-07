/*
 * lcd.h
 *
 *  Created on: 21 Aug 2022
 *      Author: Esraa Samir
 */

#ifndef LCD_H_
#define LCD_H_
#include <stdint.h>

void lcd_init(void);
void lcd_send_cmd(uint8_t command);

#endif /* LCD_H_ */
