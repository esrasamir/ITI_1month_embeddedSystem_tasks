/*
 * dio.c
 *
 *      Author: ASHRAF
 */

#include "dio.h"
#include <avr/io.h>
#include <stdint.h>



/**
 * @brief 
 * Set DIO pins direction
 * @param port: Specifies the DIO num where x equals A,B,C,D
 * @param pin: 
 * @param direction : 
 * 						this value must be type of dio_direction_t
 * @example: 
 * dio_set_direction(DIOA, 4, OUTPUT);
 */
void dio_set_direction(dio_t port, dio_pin_t pin, dio_direction_t direction)
{
	switch (port)
	{
	case DIOA:
		/* code */
		DDRA &= ~(0x01<<pin);   // clear bit
		DDRA |= direction <<pin; // set value
		break;
	case DIOB:
		DDRB &= ~(0x01<<pin);   // clear bit
		DDRB |= direction <<pin; // set value
		/* code */
		break;
	case DIOC:
		/* code */
		DDRC &= ~(0x01<<pin);   // clear bit
		DDRC |= direction << pin; // set value
		break;
	case DIOD:
		/* code */
		DDRD &= ~(0x01<<pin);   // clear bit
		DDRD |= direction << pin; // set value
		break;
	
	default:
		//reDIO error
		break;
	}
}


void dio_set_level(dio_t port, dio_pin_t pin, dio_level_t value)
{
	switch (port)
	{
	case DIOA:
		/* code */
		PORTA &= ~(0x01<<pin);   // clear bit
		PORTA |= value <<pin; // set value
		break;
	case DIOB:
		PORTB &= ~(0x01<<pin);   // clear bit
		PORTB |= value <<pin; // set value
		/* code */
		break;
	case DIOC:
		/* code */
		PORTC &= ~(0x01<<pin);   // clear bit
		PORTC |= value << pin; // set value
		break;
	case DIOD:
		/* code */
		PORTD &= ~(0x01<<pin);   // clear bit
		PORTD |= value << pin; // set value
		break;
	
	default:
		//report error
		break;
	}
}


dio_level_t dio_get_level(dio_t port, dio_pin_t pin)
{
	switch (port)
	{
	case DIOA:
		return 0b01&(PINA>>pin);
		break;
	case DIOB:
		return 0b01&(PINB>>pin);
		break;
	case DIOC:
		return 0b01&(PINC>>pin);
		break;
	case DIOD:
		return 0b01&(PIND>>pin);
		break;
	
	default:
		break;
	}

void dio_set_port_direction (){
	if(direction == DIO_DIRECTION_INPUT){
		switch (port)
		{
		case DIO_PORTA:
			DDRA = 0 ;
			break;
		case DIO_PORTB:
			DDRB = 0 ;
			break;
		case DIO_PORTC:
			DDRC = 0 ;
			break;
		case DIO_PORTD:
			DDRD = 0 ;
			break;
		default: //report error
			break;
		}
	}
	else{
		switch (port)
		{
		case DIO_PORTA:
			DDRA = 0xff ;
			break;
		case DIO_PORTB:
			DDRB = 0xff ;
			break;
		case DIO_PORTC:
			DDRC = 0xff ;
			break;
		case DIO_PORTD:
			DDRD = 0xff ;
			break;
		default: //report error
			break;
		}
	}
}

void dio_set_port_level(dio_t port , uint8_t value){
	switch (port)
		{
		case DIO_PORTA:
			PORTA = value ;
			break;
		case DIO_PORTB:
			PORTB = value ;
			break;
		case DIO_PORTC:
			PORTC = value ;
			break;
		case DIO_PORTD:
			PORTD = value ;
			break;
		default: //report error
			break;
		}
}

}


