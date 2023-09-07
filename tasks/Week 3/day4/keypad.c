/*
 * keypad.c

 *
 *  Created on: 17 Aug 2022
 *      Author: Esraa Samir
 */

#include "keypad_config.h"
#include "kepad_private.h"
#include "dio.h"
#include <avr/delay.h>

char key_get_pressed_key()
{
    char keys[KEYPAD_RAW_NUM][KEYPAD_COLUMN_NUM] = KEYPAD_KEY_VALUES;

    porting_t raw_arr[KEYPAD_RAW_NUM] = KEYPAD_RAW_ARR_VALUE;
    porting_t col_arr[KEYPAD_COLUMN_NUM] = KEYPAD_COL_ARR_VALUE;

    //init columns to released state
    for(int8_t i = 0; i < KEYPAD_COLUMN_NUM; i++)
    {
        dio_set_level(col_arr[i].port, col_arr[i].pin, RELEASED_LEVEL);
    }

    //scaning
    for(uint8_t c = 0; c < KEYPAD_COLUMN_NUM; c++)
    {
        dio_set_level(col_arr[c].port, col_arr[c].pin, PRESSED_LEVEL);
        for(uint8_t r = 0; r < KEYPAD_RAW_NUM; r++)
        {
            //delay for simulation
            _delay_ms(3);
            if(dio_get_level(raw_arr[r].port, raw_arr[r].pin) == PRESSED_LEVEL)
            {
                //wait debounce
                _delay_ms(5);
                //wait
                while(dio_get_level(raw_arr[r].port, raw_arr[r].pin) == PRESSED_LEVEL)
                {
                }
                //
                return keys[r][c];
            }
        }
        dio_set_level(col_arr[c].port, col_arr[c].pin, RELEASED_LEVEL);
    }

    return NO_PRESS_VAL;

}




