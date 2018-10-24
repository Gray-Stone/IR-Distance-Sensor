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

 
	timer1FastPWMSetup(300*2);
	// TODO somehow put timing stuff into object?
	
	unsigned int topMax = 400;
	unsigned int topMin = 160;
	
	unsigned int sectionLength = 50 ;
	
	unsigned int top = topMin ;
		
    while (1) 
    {
		if (itrCount ==  sectionLength/2 )
		{
			//PORTB &= ( ~1<<PORTB2 ) ;
		TCCR1A &= ( ~ ( 0x3 << COM1B0 ) ) ;	// Clear OC1B output 

			//DDRB &= ( ~ 1<<PORTB2 )  ;
		}
		if (itrCount > sectionLength )
		{
			itrCount -= sectionLength;
			//DDRB |= 1 << PORTB2 ;
		TCCR1A |= ( 0x2 << COM1B0 ) ;	// set OC1B non inverting output

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