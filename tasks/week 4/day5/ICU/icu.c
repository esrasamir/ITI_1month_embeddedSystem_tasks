/*
 * icu.c
 *
 * Created: 26/08/2022 11:28:25 pm
 *  Author: Esraa Samir
 */ 
#include "icu.h"

void ICU_init(const t_Icu_Config* config_ptr)
{
	CLR_BIT(SREG,I_BIT);
	/* Configure PD6 as input pin (Input capture pin) */
	CLR_BIT(DDRD,PD6);

	/* Operate Timer1 in normal mode*/
	/* COM bits  =0
	 * WGM bits  =0
	 * FOC1 bits =1
	 */
	TCCR1A = 0;
	TCCR1A = (1<<FOC1A) | (1<<FOC1B);


	TCCR1B = 0;
	TCCR1B = (TCCR1B & 0xF8) | (config_ptr->clockPrescalar); /* Select the required prescalar (Timer1 clock source)*/
	TCCR1B = (TCCR1B & 0xBF) | ((config_ptr->edge)<<6); 			 /* Select for edge Triggering mode */
	TCCR1B = (TCCR1B & 0x7F) | ((config_ptr->noiseOption)<<7);    /* Select Noise cancelling option*/

	TCNT1 = 0; /*init timer1 counter 0*/
	ICR1 = 0;  /*init Input Capture register counter 0*/

	/* Enable ICU Interrupt*/
	SET_BIT(TIMISK,TICIE1);

	SET_BIT(SREG,I_BIT);
}


void ICU_setEdgeDetectionMode(const t_Icu_EdgeDetectionType edgeType)
{
	TCCR1B = (TCCR1B & 0xBF) | (edgeType<<6);
}

u16 ICU_getInputCaptureValue(void)
{
	return ICR1;
}

void ICU_clearTimerValue(void)
{
	TCNT1 = 0;
}

void ICU_DeInit(void)
{
	TCCR1A = 0;
	TCCR1B = 0;
	TCNT1  = 0;
	ICR1   = 0;

	/* Disable the interrupt */
	CLR_BIT(TIMISK,TICIE1);
}
