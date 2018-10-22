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


// done on atmega328p as arduino chip
int main(void)
{
	itrCount =0; // itrCount will increment every peroid
	
	sei();// enable  interrupt

 
	timer1FastPWMSetup();
	// TODO somehow put timing stuff into object?
	
	unsigned int topMax = 400;
	unsigned int topMin = 160;  
	
	unsigned int top = topMin ;
		
    while (1) 
    {
		if (itrCount > 5 )
		{
			itrCount-=5;
			top+=50 ;		// change the period
			if (top > topMax) top = topMin; 
			timer1SetOCR1ATop(top);
		}
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


ISR(TIMER1_COMPA_vect) // interrupt occur when OCR0A match
{
	cli(); // disable interrupt
	++itrCount;
	sei();// enable  interrupt
}