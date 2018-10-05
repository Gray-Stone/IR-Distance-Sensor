/* 
* Setup.h
*
* Created: 2018/10/4 3:21:12
* Author: leogr
*/


#ifndef __SETUP_H__
	#include <avr/io.h>
#define __SETUP_H__


class Timer0
{
	
//variables
public:

	volatile unsigned char *itrCount ;
	


//functions
public:

	Timer0( );
	~Timer0();
	
	void timer0Setup();
	


}; //Setup

#endif //__SETUP_H__
