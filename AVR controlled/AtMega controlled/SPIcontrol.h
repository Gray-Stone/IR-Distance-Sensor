/* 
* SPIcontrol.h
*
* Created: 2018/11/2 2:31:09
* Author: leogr
*/


#ifndef __SPICONTROL_H__
#define __SPICONTROL_H__

#include <avr/io.h>

void SPI_MasterM0Init(void);
void SPI_MasterTransmitNoSS(char cData);


#endif //__SPICONTROL_H__
