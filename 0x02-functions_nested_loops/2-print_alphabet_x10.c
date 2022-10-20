#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - void
 * Description: prints alphabets  for 10 timnes.
 * Author: mohaomar4950
 */

void print_alphabet_x10(void)
{
	int n = 1;
	char c = 97;

	while (n <= 10)
	{
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		n++;
	}
}
