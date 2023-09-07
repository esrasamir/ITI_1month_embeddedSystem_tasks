#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_
#include <stdint.h>


typedef enum{
	AREF = 0b00,
	AVCC = 0b01 ,
	INTERNAK2_56V = 0b11,
} adc_ref_t;

typedef enum{
	ADC_PRESCALER_2     = 0b00 ,
	ADC_PRESCALER_4     = 0b10 ,
	ADC_PRESCALER_8     = 0b11 ,
	ADC_PRESCALER_16    = 0b01 ,
	ADC_PRESCALER_32    = 0b101 ,
	ADC_PRESCALER_64    = 0b011 ,
	ADC_PRESCALER_128   = 0b111 ,
} adc_prescaler_value ;

#define ADC_REF_VALUE       AVCC
#define ADC_AUTO_TRIGGER    0
#define ADC_INT_ENABLE      0
#define ADC_PRESCALER_SEL   PRESCALER_64


#endif /* ADC_CONFIG_H_ */