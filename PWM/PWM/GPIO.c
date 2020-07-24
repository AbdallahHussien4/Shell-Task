/*
 * GPIO.c
 *
 * Created: 7/23/2020 11:42:53 AM
 *  Author: Abdallah Hussien
 */ 

#include "GPIO.h"
#include <avr/io.h>

void Gpioinit()
{
	DDRB=0b00000110;
}
