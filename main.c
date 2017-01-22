/************************************
********* MSYS, LAB6, del 3 *********
********* Henning Hargaard  *********
********* 18.september 2015 *********
*************************************/
//#define F_CPU 16000000
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	DDRA = 0;
	DDRB = 0xFF;
	while (1)
	{
		if ((PINA & 0b10000000) == 0)
		_delay_us(956);
		else if ((PINA & 0b01000000) == 0)
		_delay_us(851);
		else if ((PINA & 0b00100000) == 0)
		_delay_us(758);
		else if ((PINA & 0b00010000) == 0)
		_delay_us(716);
		else if ((PINA & 0b00001000) == 0)
		_delay_us(638);
		else if ((PINA & 0b00000100) == 0)
		_delay_us(568);
		else if ((PINA & 0b00000010) == 0)
		_delay_us(506);
		else if ((PINA & 0b00000001) == 0)
		_delay_us(478);
		
		if (PINA != 0xFF)
	 	PORTB = ~PINB;
	}
}
