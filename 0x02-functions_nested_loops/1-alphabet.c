#include  <stdio.h>

/**
 * print_alphabet - print_alphabets
 * Description: prints alphabets using function
 * Author: mohaomar4950
 *
 */

void print_alphabet(void)
{
	char c = 97;

	do

	{
		_putchar(c);
		c++;

	} while (c <= 122);
	_putchar(10);
}
