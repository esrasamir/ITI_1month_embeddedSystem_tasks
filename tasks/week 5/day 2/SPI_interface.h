
#ifndef SPI_INTERFACE_H_  
#define SPI_INTERFACE_H_

void SPI_voidInitMaster(void);


void SPI_voidInitSlave(void);


uint8_t  SPI_u8Transceive(uint8_t Copy_u8Data);


void SPI_u8MasterTransceive(uint8_t *Copy_u8RecCharr, uint8_t *Copy_u8Charr,uint8_t Copy_u8Size);

void SPI_u8SlaveTransceive(uint8_t *Copy_u8RecCharr, uint8_t *Copy_u8Charr);

#endif
