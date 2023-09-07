#include "timer.h"
#include <avr/io.h>


void timer_init(timer_t timer, timer_config_t config)
{
    switch (timer)
    {
    case TIMER0:
        // set_mode
        TCCR0 = 0;
        //TCCR0 &= ~(0b11<<WGM00);
        TCCR0 |= config.output_mode<<WGM00;
        //clock source    
        TCCR0 |= config.clksrc << CS00; 
        //interrupt enable
        if(config.output_mode == NORMAL)
        {
            TIMSK &= ~(0b1<<TOIE0);
            
        }
        break;
    
    default:
        break;
    }
}
