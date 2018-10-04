/*
 * AtMega controlled.cpp
 *
 * Created: 2018/10/4 3:00:03
 * Author : leogr
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>


volatile char itrCount ;
char oneSec = 249;

void timer0Setup()
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


// done on atmega328p as arduino chip
int main(void)
{
	itrCount =0;
	
	sei();// enable  interrupt

	DDRB = 0xff; // PB5 is digital 13
	PORTB = 0x00;
		
	PORTB = 1 << PORTB5;
	// setup timer0 
	timer0Setup();
	
		
    while (1) 
    {
		if(itrCount > oneSec)
		{
			itrCount-=oneSec;
			PORTB = 0x00;
		}
		
		if(itrCount == oneSec/2)
		{
				PORTB = 1<<PORTB5;
		}
    }
}




ISR(TIMER0_COMPA_vect) // interrupt occur when OCR0A match 
{
	cli(); // disable interrupt 
		++itrCount;
	sei();// enable  interrupt

}


