/*
 * AtMega controlled.cpp
 *
 * Created: 2018/10/4 3:00:03
 * Author : leogr
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

#include "TimerControl.h"
#include "SPIcontrol.h"

/* Pin assigments 
* PB2 is PWM output to LED -- D10 on arduino 
* PB1 for input from sensor
* PB3,4,5 is for SPI (master mode no SS)
*/

volatile unsigned char itrCount =0 ;

// done on atmega328p as arduino chip
int main(void)
{
	// port setup
	DDRB = (0<<PORTB1) + (1<<PORTB2) +(1<<PORTB3) + (1<<PORTB5); 
	
	sei();// enable  interrupt
	
	//initial functions setup
	//SPI_MasterM0Init();
	timer1FastPWMSetup(300*2);
	
	// decide the frequency range
	// 16Khz to 20Khz = (200 -0 ) +800 
	unsigned char top = 0 ;
	unsigned char topMax = 200;
	unsigned int topBias = 800;
	unsigned int sectionLength = 30 ;
	unsigned char found=0;

	while(1)
	{
		top = 0 ;
		itrCount =0; // itrCount will increment every peroid
		found=0;
		while (found == 0 )
		{
			if(itrCount == sectionLength/2)
			{
				TCCR1A &= ( ~ ( 0x3 << COM1B0 ) ) ;	// turn off OC1B output
				if( PINB & (1<<PINB1) ) // input should be usually low, and high at transition
				{
					found =1;
				}	
			}
		
			if( itrCount>sectionLength)
			{
				itrCount=0;
				top++;
				if (top>topMax)
				{
					found =-1;
				}
				timer1OCR1A_SetTop(top+topBias);
				
				TCCR1A |= ( 0x2 << COM1B0 ) ;	// turn on OC1B non inverting output
			}
		
		}
		
		////SPI_MasterTransmitNoSS(top);
		////SPI_MasterTransmitNoSS(250);
	}


}



ISR(TIMER1_COMPA_vect) // interrupt occur when OCR0A match
{
	cli(); // disable interrupt
	++itrCount;
	sei();// enable  interrupt
}