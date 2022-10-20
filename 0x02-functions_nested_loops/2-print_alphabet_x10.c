#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - void
 * Description: prints alphabets  for 10 timnes.
 * Author: mohaomar4950
 */

void print_alphabet_x10(void)
{
	for (int n = 0; n < 10; n++)
	{
		for (int c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar(10);
	}
}
