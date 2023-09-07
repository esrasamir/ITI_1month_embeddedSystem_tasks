
#include <avr/io.h>
#include "dio.h"
#include "lcd.h"
#include "lcd_config.h"
#include "uart.h"


int main(void)
{
dio_set_direction(DIO_PORTD,DIO_PIN0,DIO_DIRECTION_OUTPUT);
dio_set_direction(DIO_PORTD,DIO_PIN1,DIO_DIRECTION_OUTPUT);
    char c;
    uart_init();
    
   
    while(1)
    {
		lcd_init();
		uart_send_data('x');
		char c=uart_read_data();
		lcd_send_data(c);
		
	   
    }
}

