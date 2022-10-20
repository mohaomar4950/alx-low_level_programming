#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - void
 * Description: prints alphabets  for 10 timnes.
 * Author: mohaomar4950
 */

void print_alphabet_x10(void)
{
	int n;
	int c;

	for (n = 0; n < 10; n++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar(10);
	}
}
