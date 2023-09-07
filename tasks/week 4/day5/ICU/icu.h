/*
 * icu.h
 *
 * Created: 26/08/2022 11:28:07 pm
 *  Author: Esraa Samir
 */ 
#include <stdint.h>
#include "mcal/bit_math.h"

#ifndef ICU_H_
#define ICU_H_

typedef enum
{
	NO_CLOCK, F_CPU_CLOCK, F_CPU_8, F_CPU_64, F_CPU_256, F_CPU_1024
}t_Icu_ClockSource;

typedef enum
{
	Falling, Rising
}t_Icu_EdgeDetectionType;

typedef enum
{
	NoNoiseCanceller, ActivateNoiseCanceller
}t_Icu_NoiseCancellingOptions;

typedef struct
{
	t_Icu_ClockSource            clockPrescalar;
	t_Icu_EdgeDetectionType      edge;
	t_Icu_NoiseCancellingOptions noiseOption;
}t_Icu_Config;


/*            Functions Prototypes          */


void ICU_init(const t_Icu_Config* config_ptr);
void ICU_setEdgeDetectionMode(const t_Icu_EdgeDetectionType edgeType);
uint16_t  ICU_getInputCaptureValue(void);
void ICU_clearTimerValue(void);
void ICU_DeInit(void);







#endif /* ICU_H_ */