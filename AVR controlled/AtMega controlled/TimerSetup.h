/* 
* TimerSetup.h
*
* Created: 2018/10/22 1:58:48
* Author: leogr
*/


#ifndef __TIMERSETUP_H__
#define __TIMERSETUP_H__

#include <avr/io.h>

void timer0CTCSetup() ;

void timer0FastPWMSetup(unsigned char top);
void timer0FastPWMSetup();

void timer1FastPWMSetup(unsigned int top);
void timer1FastPWMSetup();
void timer1SetOCR1ATop(unsigned int top);






#endif //__TIMERSETUP_H__
