/*	Author: skim370
 *  Partner(s) Name: 
 *	Lab Section:023
 *	Assignment: Lab #2  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA = 0x00;	PORTA = 0xFF;
	DDRC= 0xFF;	PORTC = 0x00;
	unsigned char tempA = 0x00;
	unsigned char maskA = 0x00;	
	unsigned char count = 0x00;
	unsigned char i = 0;
    while (1) {
	tempA = PINA;
	for(i =0; i < 4; ++i){
		maskA = tempA;
		if((maskA >> i) & 0x01){
			++count;
		 }
	}
	PORTC = count;
	count = 0;
    }
    return 1;
}
