#include<stdint.h>
#include"SPI_interface.h"
#include"SPI_private.h"
#include"SPI_config.h"
#include"SPI_register.h"

#include "util/delay.h"

void SPI_voidInitMaster(void)
{
	/*Master initialization*/
	SET_BIT(SPCR,SPCR_MSTR);

	/*clock prescasler :divided by 16*/
	SET_BIT(SPCR,SPCR_SPR0);
	CLR_BIT(SPCR,SPCR_SPR1);
	CLR_BIT(SPSR,SPSR_SPI2X);





	/*SPI ENABLE*/
	SET_BIT(SPCR,SPCR_SPE);



}


void SPI_voidInitSlave(void)
{
	/*Slave initialization*/
	CLR_BIT(SPCR,SPCR_MSTR);
	/*SPI ENABLE*/
	SET_BIT(SPCR,SPCR_SPE);

}


uint8_t  SPI_u8Transceive(uint8_t Copy_u8Data)
{
/*send the data*/
SPDR=Copy_u8Data;

/*wait (busy waiting) until transfer is completed*/
while(GET_BIT(SPSR,SPSR_SPIF)==0);

/*Get the data*/
return SPDR;


}


void SPI_u8MasterTransceive(uint8_t *Copy_u8RecCharr, uint8_t *Copy_u8Charr,uint8_t Copy_u8Size)
{
	uint8_t Local_u8Iterator;
	for(Local_u8Iterator=0;Local_u8Iterator<Copy_u8Size;Local_u8Iterator++)
	{
		Copy_u8RecCharr[Local_u8Iterator]=SPI_u8Transceive(Copy_u8Charr[Local_u8Iterator]);
		_delay_ms(100);
	}
	Copy_u8Charr[Local_u8Iterator+1]='\0';
	SPI_u8Transceive(Copy_u8Charr[Local_u8Iterator+1]);
}


void SPI_u8SlaveTransceive(uint8_t *Copy_u8RecCharr, uint8_t *Copy_u8Charr)
{
	uint8_t Local_u8Iterator;
	while(Copy_u8RecCharr[Local_u8Iterator-1]!='\0')
	{
		Copy_u8RecCharr[Local_u8Iterator]=SPI_u8Transceive(Copy_u8Charr[Local_u8Iterator]);
	}

}
