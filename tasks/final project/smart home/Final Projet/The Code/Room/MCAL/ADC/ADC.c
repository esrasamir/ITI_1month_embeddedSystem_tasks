
#include "ADC.h"

void ADC_Init(void)
{
 // AREF = AVcc

 ADMUX |= (1<<REFS0);                                                   //voltage reference from AVCC

                                             

 ADCSRA | = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);                 //16mhz/128=125hz the ADC reference the ADC reference clock

}
u16 ADC_readChannel (u8 channel);                                       // select the name channel 0~7
{
	                                           

	channel &= 0b00000111;                                          // AND operation with 7
	 ADMUX &=  0xF8);                                               //clear the older channel that was read
         ADMUX |=channel;                                               //Defines the new ADC channel to be read
	                                                                                  


	 ADCSRA |= (1<<ADSC);                                           // starts a new convertion(single convertion


	 while(ADCSRA & (1<<ADSC));                                      // wait for conversion to complete            
	 return (ADC);                                                  //Return the ADC value of the chsen channel
	}
