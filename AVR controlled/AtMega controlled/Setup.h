/* 
* Setup.h
*
* Created: 2018/10/4 3:21:12
* Author: leogr
*/


#ifndef __SETUP_H__
	#include <avr/io.h>
#define __SETUP_H__


class Setup
{
//variables
public:
protected:
private:

//functions
public:
	Setup();
	~Setup();
	void timer0Setup();


protected:
private:
	Setup( const Setup &c );
	Setup& operator=( const Setup &c );

}; //Setup

#endif //__SETUP_H__
