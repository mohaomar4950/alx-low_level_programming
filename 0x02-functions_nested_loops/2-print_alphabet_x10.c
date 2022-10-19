#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - void
 * Description: prints alphabets  for 10 timnes.
 * Author: mohaomar4950
 */

void print_alphabet_x10(void)
{
	char c = 97;
	int count = 0;

	while (count < 10)
	{
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		count++;
		_putchar(10);
	}
}
