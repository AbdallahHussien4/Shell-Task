/*
 * PWM.c
 *
 * Created: 7/23/2020 10:47:13 AM
 * Author : Abdallah Hussien
 */ 

// Clock frequency = 8Mhz.

#include <avr/io.h>
#include "GPIO.h"
#include "Timer.h"



int main(void)
{
	Gpioinit();
	Timer1init();
    while (1) 
    {
    }
}

