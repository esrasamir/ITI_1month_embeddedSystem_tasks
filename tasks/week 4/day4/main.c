/*
 * main.c
 *
 * Created: 8/25/2022 5:21:02 AM
 *  Author: Esraa Samir
 */ 

#include <xc.h>

#define F_CPU 8000000UL
#include <util/delay.h>
#define GET_BIT(reg,bitn) ((reg>>bitn) & 0b1)
void main()
{	
	DDRB = 0b011; // B0,B1 are outputs
	DDRA = 0;
	while(1){
		if(GET_BIT(PINA , PINA0) == 0b0)
		{
		PORTB = 0b011;
		}
		else if(GET_BIT(PINA , PINA0) == 0b01)
		{
		PORTB = 0;
			}		
		}
}