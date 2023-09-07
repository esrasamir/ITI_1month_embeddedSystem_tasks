#include "ICU.h"
#include "lcd.h"
#include "Timer0.h"
#include "avr/interrupt.h"
#include <stdint.h>
#include <xc.h>
#define F_CPU 8000000UL
#include <util/delay.h>

uint8_t IcuEdgeCount = 0;
uint16_t T_on = 0;
uint16_t T_off = 0;
uint16_t period = 0;
uint16_t Duty = 0;

int main(void)
{

	t_Icu_Config Config_structure = {F_CPU_CLOCK, Rising, NoNoiseCanceller};
	LCD_init();
	timer0_init_PWM();
	set_dutyCycle(0);

	ICU_init(&Config_structure);
	while(1)
	{

		if(IcuEdgeCount == 3)
		{
			ICU_DeInit();
			IcuEdgeCount=0;

			LCD_displayString("Duty= ");
			Duty = (uint16_t)(((float)T_on/(float)period)*100);
			LCD_intgerToString(Duty);
			LCD_displayString(" %");
		}
	}

	return 0;
}

ISR(TIMER1_CAPT_vect)
{
	IcuEdgeCount++;
	if(IcuEdgeCount ==1)   /* Deteced first Rising Edge*/
	{
		ICU_clearTimerValue();
		ICU_setEdgeDetectionMode(Falling);
	}
	else if(IcuEdgeCount == 2)    /*Detected first Falling Edge*/
	{
		T_on = ICU_getInputCaptureValue();
		ICU_setEdgeDetectionMode(Rising);
	}
	else if(IcuEdgeCount == 3)
	{
		period = ICU_getInputCaptureValue();
		ICU_setEdgeDetectionMode(Falling);
	}
}
