/*
 * 7SEG3 CODE.c
 *
 * Created: 9/20/2023 10:10:50 PM
 * Author : ADMIN
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRH = 0XFF;
    /* Replace with your application code */
    while (1) 
    {
		char array[9] =  {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9};
			//starting from 1
			for (int i=0;i<=8;i++){ //for (int i=8;i>=0;i--) to start from 9
				PORTH = array[i];
				_delay_ms(1000);
			}
    }
}

