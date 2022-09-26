#include "stdio.h"
#include "main.h"

/**
 * print_alphabet - it prints alphabets using putchar.
 *
 * Return (0);
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}

