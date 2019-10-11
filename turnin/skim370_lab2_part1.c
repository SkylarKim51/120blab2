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
	DDRB = 0xFF;	PORTB = 0x00;
	unsigned char tempA = 0x00;
	unsigned char tempB = 0x00;	
    while (1) {
	tempA = PINA;
	if(tempA == 0x01){
		tempB = 0x01;
	}
	else{
		tempB = 0x00;
	}
	PORTB = tempB;
	tempB = 0x00;
    }
    return 1;
}
