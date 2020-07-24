/*
 * Timer.c
 *
 * Created: 7/23/2020 11:43:28 AM
 *  Author: Abdallah Hussien
 */ 

#include "Timer.h"
#include <avr/io.h>
void Timer1init()
{
	TCCR1A=0b10110010;
	TCCR1B=0b01010001;
	ICR1=199;
	OCR1A= 100;
	OCR1B= 110;
	
	
}
