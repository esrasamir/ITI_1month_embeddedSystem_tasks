
#ifndef SPI_H_
#define SPI_H_

#include "avr/io.h"

/*****************************************************************************************
 *  								Functions Prototypes
 ****************************************************************************************/
void SPI_initMaster(void);
void SPI_initSlave(void);
void SPI_sendByte(const uint8_t data);
uint8_t   SPI_recieveByte(void);

#endif /* SPI_H_ */
