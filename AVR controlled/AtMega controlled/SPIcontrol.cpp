/* 
* SPIcontrol.cpp
*
* Created: 2018/11/2 2:31:09
* Author: leogr
*/


#include "SPIcontrol.h"


// On ATMEGA328P, PB5=sck PB4 = MISO PB3=MOSI 
void SPI_MasterM0Init(void)
{
	/* Set MOSI and SCK output, all others input */
	DDRB = (1<<PORTB5) + (1<<PORTB3) ;
	/* Enable SPI, Master, set clock rate fck/16 */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}


void SPI_MasterTransmitNoSS(char cData)
{
	/* Start transmission */
	SPDR = cData;
	/* Wait for transmission complete */
	while(!(SPSR & (1<<SPIF)));
}
