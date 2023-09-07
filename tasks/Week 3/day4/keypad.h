/*
 * keypad.h
 *
 *  Created on: 17 Aug 2022
 *      Author: Esraa Samir
 */
#include <stdint.h>
#ifndef KEYPAD_H_
#define KEYPAD_H_

void keypad_init();

/* void keypad_set_column(column_num);
dio_level_t kepad_get_rawvalue(raw_num);
we didn't use it to make hidden to the people*/

uint8_t key_get_pressed_key(); // we use it instead




#endif /* KEYPAD_H_ */
