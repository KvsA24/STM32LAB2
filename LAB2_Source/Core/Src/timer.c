/*
 * timer.c
 *
 *  Created on: Oct 2, 2025
 *      Author: LENOVO
 */
#include "timer.h"
int timer0_counter = 0;
int timer0_flag = 0;
int TIMER_CYCLE0 = 9;
int timer1_counter = 0;
int timer1_flag = 0;
int TIMER_CYCLE1 = 1;
void setTimer0(int duration)
{
	timer0_counter = duration / TIMER_CYCLE0;
	timer0_flag = 0;
}
void setTimer1(int duration)
{
	timer1_counter = duration / TIMER_CYCLE1;
	timer1_flag = 0;
}
void timer_run()
{
	if(timer0_counter > 0)
	{
		timer0_counter--;
		if(timer0_counter <= 0)
		{
			timer0_flag = 1;
		}
	}
	if(timer1_counter > 0)
	{
		timer1_counter--;
		if(timer1_counter <= 0)
		{
			timer1_flag = 1;
		}
	}
}
