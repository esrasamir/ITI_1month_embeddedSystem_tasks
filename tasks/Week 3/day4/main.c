/*
 * main.c
 *
 *  Created on: 17 Aug 2022
 *      Author: Esraa Samir
 */

#include "lcd.h"
#include "keypad.h"
#include <avr/io.h>
#include <avr/delay.h>
#include <stdint.h>


void main(){
	lcd_init();
	keypad_init();
	while(1){
		uint8_t key = key_get_pressed_key();
		if (key != 0){
			lcd_send_data();
		}

	}



}
