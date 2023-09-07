#include <avr/io.h>
#include <avr/delay.h>

#include "C:\Users\Esraa Samir\Downloads/lcd.h"

void main (){
    lcd_init();
    lcd_send_cmd('E');
    lcd_send_cmd('S');
    lcd_send_cmd('R');
    lcd_send_cmd('A');
    lcd_send_cmd('A');

	while (1) {} 
    return 0 ;
 
} 
