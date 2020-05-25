/*
 * Switches.c
 *
 *  Created on: Aug 17, 2019
 *      Author: Lenovo
 */
#include "utils.h"
#include<avr/io.h>
#include<avr/delay.h>

#define F_CPU 8000000
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;
void main(void) {
	DDRA = 0b11111111;
	DDRB = 0b00000000;
	PORTB = 0b00000011;
	while (1) {
		if (!Get_bit(PINB, 0))
			Set_bit(PORTA, 0);


		else
			Clr_bit(PORTA, 0);
		if (!Get_bit(PINB, 1))
			Set_bit(PORTA, 1);

		else
			Clr_bit(PORTA, 1);
	}
}

