/*
 * timer.h
 *
 *  Created on: Oct 2, 2025
 *      Author: LENOVO
 */

#ifndef TIMER_H_
#define TIMER_H_
void setTimer0();
void setTimer1();
void timer_run();

extern int timer0_counter;
extern int timer0_flag;
extern int TIMER_CYCLE0;
extern int timer1_counter;
extern int timer1_flag;
extern int TIMER_CYCLE1;



#endif /* TIMER_H_ */
