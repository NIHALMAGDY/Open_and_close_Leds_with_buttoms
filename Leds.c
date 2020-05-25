/*
 * Leds.c
 *
 *  Created on: Aug 17, 2019
 *      Author: Lenovo
 */
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
	while (1) {
		PORTA = 0b11111111;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
		PORTA = 0b10010001;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
		PORTA = 0b01001010;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
		PORTA = 0b00100100;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
		PORTA = 0b00000001;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b00000100;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b00010000;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b01000000;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b10000000;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b00100000;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b00001000;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b00000010;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
		PORTA = 0b00000001;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00000010;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00000100;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00001000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00010000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00100000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b01000000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b10000000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b10000000;
		_delay_ms(150);
		PORTA = 0b01000000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00100000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00010000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00001000;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00000100;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00000010;
		_delay_ms(150);
		PORTA = 0b00000000;
		_delay_ms(150);
		PORTA = 0b00000001;
		_delay_ms(150);
		PORTA = 0b00000000;

	}
}

