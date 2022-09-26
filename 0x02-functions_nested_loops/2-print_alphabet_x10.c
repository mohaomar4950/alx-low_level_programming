#include "stdio.h"
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times.
 *
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	for (int i = 0; i <= 10; i++)
	{
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	}
	_putchar('\n');
}
