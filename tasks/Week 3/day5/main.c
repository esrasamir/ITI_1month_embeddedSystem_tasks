
#include <avr/io.h>
#include <util/delay.h>
#include "LCD/lcd.h"

#define CLOCKWISE_IN 4
#define C_CLOCKWISE_IN 5
#define CLOCKWISE_OUT 6
#define C_CLOCKWISE_OUT 7


int main(void){
	lcdInit();
	lcdClear();

	DDRD |= (1<<CLOCKWISE_OUT)|(1<<C_CLOCKWISE_OUT);
	PORTD |= (1<<CLOCKWISE_IN)|(1<<C_CLOCKWISE_IN);
	while(1){
		if((PIND&(1<<CLOCKWISE_IN))==0){
			PORTD |= (1<<CLOCKWISE_OUT);
			PORTD &= ~(1<<C_CLOCKWISE_OUT);
			lcdClear();
			lcdPrintAt(1,1,"clockwise");
		}
		if((PIND&(1<<C_CLOCKWISE_IN))==0){
			PORTD &= ~(1<<CLOCKWISE_OUT);
			PORTD |= (1<<C_CLOCKWISE_OUT);
			lcdClear();
			lcdPrintAt(1,1,"counter clockwise");
		}
	}
	return 0;
}

