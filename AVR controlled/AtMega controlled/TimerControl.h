/* 
* TimerSetup.h
*
* Created: 2018/10/22 1:58:48
* Author: leogr
*/


#ifndef __TIMERCONTROL_H__
#define __TIMERCONTROL_H__

#include <avr/io.h>

void timer0CTCSetup() ;

void timer0FastPWMSetup(unsigned char top);
void timer0FastPWMSetup();

void timer1FastPWMSetup(unsigned int top);
void timer1FastPWMSetup();
void timer1OCR1A_SetTop(unsigned int top);
void timer1OC1B_switch (char flag);






#endif //__TIMERCONTROL_H__
