 #include "uart.h"
 #include <avr/io.h>
 #include <stdint.h>

 #define SET_BIT(reg,bit_n)		reg|= (1<<bit_n); 
 #define CLR_BIT(reg,bit_n)		reg&= (1<<bit_n); 

 void uart_init(){

	
	UCSRB= 1<<RXEN | 1<<TXEN;

	uint8_t ucsrc_val =0;
	SET_BIT(ucsrc_val,UCSZ0);
	
	SET_BIT(ucsrc_val,UCSZ1);
	CLR_BIT(UCSRC,UCSZ2);

	CLR_BIT(ucsrc_val,UMSEL);
	

	CLR_BIT(ucsrc_val,UPM0);
	CLR_BIT(ucsrc_val,UPM1);

	
	CLR_BIT(ucsrc_val,USBS);

	UCSRC =(1<<URSEL| ucsrc_val);
	
	UBRRL = 51;		
	UBRRH = 0X00;	

	CLR_BIT(UCSRB,RXCIE);
	CLR_BIT(UCSRB,TXCIE);
	CLR_BIT(UCSRB,UDRIE);

 }

 char uart_read_data(){
	
	while (! (UCSRA & (1<<RXC))==0);	
	return UDR; 

 }

 void uart_send_data(uint8_t data){
	
	while (! (UCSRA & (1<<UDRE)));	
	UDR = data ;	
 }

 void UART_SendString(char *str)
 {
	 unsigned char j=0;
	 
	 while (str[j]!=0)		
	 {
		 uart_send_data(str[j]);
		 j++;
	 }
 }