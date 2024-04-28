/*
 * ASSIGNMENT1 CODE.c
 *
 * Created: 9/20/2023 4:57:43 PM
 * Author : ADMIN
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRJ = 0b00000111;   //setting columns of the keypad to output (1) and rows to input (0)
	DDRF = 0xff;
	DDRH = 0XFF;
	DDRL = 0XFF;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTJ = 0B11111110; //putting a 0 at column1
		if((PINJ&0b00100000) == 0x00){ //if 4 is pressed
			//lighting the LEDS
			PORTL = 0b01111000; // led4,5,6,7
			
			
			
			//displaying on the multi 7 segment (common anode (1 light))
			PORTH = 0B00010000;  //activating 1st segment
			PORTF = 0x04;// BCD numbering in hexa decimal == 0B10011001 without a decoder  //writing a 4
			_delay_ms(1000);
			
			PORTH = 0B00100000;  //activating 2nd segment
			PORTF = 0x03;//0B10110000;  //writing a 3
			_delay_ms(1000);
			
			PORTH = 0B01000000;  //activating 3rd segment
			PORTF = 0x02;//0B10100100;  //writing a 2
			_delay_ms(1000);
			
			PORTH = 0B10000000;  //activating 4th segment
			PORTF = 0x01;//0b11001111;  //writing a 1
			_delay_ms(1000);
			}
			
			
			PORTJ = 0B11111101; //putting a 0 at column 2
			if((PINJ&0b00100000) == 0x00){ //if 5 is pressed
				//lighting the LEDS
				//PORTL &= ~(1<<3); //switching off led 4
				PORTL = 0b11110000; // led5,6,7,8
				
				//displaying on the multi 7 segment (common anode (1 light))
				PORTH = 0B00010000;  //activating 1st segment
				PORTF = 0x05;
				_delay_ms(1000);
				
				PORTH = 0B00100000;  //activating 2nd segment
				PORTF = 0x04;
				_delay_ms(1000);
				
				PORTH = 0B01000000;  //activating 3rd segment
				PORTF = 0x03;
				_delay_ms(1000);
				
				PORTH = 0B10000000;  //activating 4th segment
				PORTF = 0x02;
				_delay_ms(1000);
			}
			
			PORTJ = 0B11111011; //putting a 0 at column 3
			if((PINJ&0b00100000) == 0x00){ //if 6 is pressed
				//lighting the LEDS
				//PORTL &= ~(1<<3); //switching off led 4
				//PORTL &= ~(1<<4); //switching off led 5
				PORTL = 0b11100001; // led6,7,8,1
				
				//displaying on the multi 7 segment (common anode (1 light))
				PORTH = 0B00010000;  //activating 1st segment
				PORTF = 0x06;
				_delay_ms(1000);
				
				PORTH = 0B00100000;  //activating 2nd segment
				PORTF = 0x05;
				_delay_ms(1000);
				
				PORTH = 0B01000000;  //activating 3rd segment
				PORTF = 0x04;
				_delay_ms(1000);
				
				PORTH = 0B10000000;  //activating 4th segment
				PORTF = 0x03;
				_delay_ms(1000);
			}
			
			
			
			
			
			
		
		
    }
}

