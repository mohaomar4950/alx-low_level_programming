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
	int c = 'a';

	while (n <= 10)
	{
		while (c <='z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
