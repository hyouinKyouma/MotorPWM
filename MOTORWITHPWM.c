/*
 * MOTORWITHPwm.c
 *
 * Created: 2/6/2018 7:23:29 PM
 *  Author: ADITYA
*/

#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include <atmega/dcmotor.h>
#include <atmega/button.h>
#include <atmega/timer.h>

int main(void)
{
	DDRA=0X00;
	PORTA=0xff;
	DDRD=0XFF;
    while(1)
    {
		if (bta1)
		{
			Pwm(100);
			forward();
		}
		else if (bta2)
		{
			Pwm(50);
			left();
			
		}
		else if (bta3)
		{
			Pwm(50);
			right();
			
		}
		else if(bta4)
		{
			Pwm(100);
			backward();	
		}
		else if(bta5)
		{
			stop();
		}
        
    }
}