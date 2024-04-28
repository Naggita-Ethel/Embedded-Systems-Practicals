/*
 * 7SEG1 CODE.c
 *
 * Created: 9/19/2023 10:54:47 PM
 * Author : ADMIN
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRH = 0xff; //output(7 seg)==11111111, common anode
	DDRK = 0xff; //common cathode
	DDRF = 0xff; //decoder (common anode 2)
	DDRL = 0xff; // multi 7 segment display (common anode 3)
	DDRE = 0xff;
    /* Replace with your application code */
    while (1) 
    {
		PORTH = 0b00010010; //common anode, active low(0) lights
		PORTK = 0b11111101;//0b00110000; //common cathode (1) lights
		PORTF = 0x07; //BCD numbering
		
		// multi 7 segment display
		PORTE = 0b00000001;  //activating 1st segment
		PORTL = 0x01;  //displaying a 1 (BCD NUMBERING USING A DECODER)
		_delay_ms(1);  //adding a delay for proper display
		
		PORTE = 0b00000010; // activating 2nd segment
		PORTL = 0x02;
		_delay_ms(1);
		
		PORTE = 0b00000100;
		PORTL = 0x03;
		_delay_ms(1);
		
		PORTE = 0b00001000;
		PORTL = 0x04;
		_delay_ms(1);
		
		
    }
}

