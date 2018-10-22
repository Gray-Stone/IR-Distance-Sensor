/*
 * AtMega controlled.cpp
 *
 * Created: 2018/10/4 3:00:03
 * Author : leogr
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

#include "TimerSetup.h"


volatile unsigned char itrCount ;
unsigned char oneSec = 249;



// done on atmega328p as arduino chip
int main(void)
{
	itrCount =0;
	
	//sei();// enable  interrupt

	
 timer0FastPWMSetup();
	// TODO somehow put timing stuff into object?
		
		
    while (1) 
    {
		itrCount+=1;
    }
}



//// TODO find a way to better put ISRs 
//ISR(TIMER0_COMPA_vect) // interrupt occur when OCR0A match 
//{
	//cli(); // disable interrupt 
		//++itrCount;
	//sei();// enable  interrupt
//
//}


