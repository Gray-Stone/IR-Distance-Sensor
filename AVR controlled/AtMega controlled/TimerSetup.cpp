/* 
* TimerSetup.cpp
*
* Created: 2018/10/22 1:58:48
* Author: leogr
*/


#include "TimerSetup.h"

void timer0CTCSetup()
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

void timer0FastPWMSetup(unsigned char top)
{
	// Mode Fast PWM with OCRA as top 
	// WGM[2:0] = 0x7 (0b111) 
	// assume base clock speed at 8/8MHz 
	// No scaling, CS0 = 0b001 
	// Non inverting mode on compartor B, COMnx[1:0] = 0x2  ( COM0B[1:0] = 0b10 ) 
	// OC0B is connected to PD5, need to set to output
	// PD5 is also digital 5 on arduino Uno
	
	DDRD = 1<<PORTD5 ; 
	
	TCCR0A = (0x2<<COM0B0) + 0b11 ; // add WGM01 and WGM00, both are one
	TCCR0B = (1<<WGM02) + 1 ; // WGM02 and CS0 = 1 for no scaling 
	
	OCR0A = top ; // 1Mhz / 50KHz = 20;
	OCR0B = OCR0A /2 ; // create 50% duty cycle 
}

void timer0FastPWMSetup()
{
	timer0FastPWMSetup(40);
}
