#include<avr/io.h>
#define F_CPU 16000000UL
#include<avr/delay.h>

char seg[10] = {
	0x3f , 0x06 , 0x5b , 0x47 , 0x66 , 0x6d , 0x7d , 0x07 , 0x7f , 0x6f
};

int main(void)
{
	PORTC = 0xff;
	int i = 0;

	while(1){

		PORTC = seg[i];
		_delay_ms(1000);

		i+=1;
		if(i>10)
		i=0;

		}
}
