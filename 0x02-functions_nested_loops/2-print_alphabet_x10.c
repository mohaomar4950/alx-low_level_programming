#include "stdio.h"
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times.
 *
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
