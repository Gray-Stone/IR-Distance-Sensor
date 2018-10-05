/* 
* Setup.cpp
*
* Created: 2018/10/4 3:21:12
* Author: leogr
*/


#include "Timer0.h"

// default constructor
Timer0::Timer0()
{
} //Setup

// default destructor
Timer0::~Timer0()
{
} //~Setup

void Timer0::timer0Setup()
{
		// default speed at 1Mhz

		TCCR0A = 0x02; // set WGM to mode 2 0b010 for CTC mode counter clear when TCNT0 match OCR0A
		
		TIMSK0 = 0x02; // enable interrupt on OCR0A
		// 16Mhz / 8 fuse bit  = 2Mhz. 
		TCCR0B = 3 ; // 2Mhz / 64 = 31250Hz and start timer
		//15625 /125 = 250
		OCR0A =	124 ;	// the value used to compare with timer.
		// when itrCounter reach 125, it means one second has passed 
}
