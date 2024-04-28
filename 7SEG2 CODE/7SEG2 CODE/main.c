/*
 * 7SEG2 CODE.c
 *
 * Created: 9/20/2023 9:08:00 PM
 * Author : ADMIN
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)

{	//printing 58.24
	DDRF = 0XFF;
	DDRJ = 0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTJ = 0B00000001;
		PORTF = 0B10010010;
		_delay_ms(1);
		
		PORTJ = 0B00000010;
		PORTF = 0B00000000;
		_delay_ms(1);
		
		PORTJ = 0B00000100;
		PORTF = 0B10100100;
		_delay_ms(1);
		
		PORTJ = 0B00001000;
		PORTF = 0b10011001;
		_delay_ms(1);
		
		
    }
}

