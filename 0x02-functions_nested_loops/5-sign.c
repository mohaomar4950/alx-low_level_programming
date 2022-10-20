#include <stdio.h>
#include "main.h"

/**
 * print_sign - returns int value
 * Description: checks whr=ther a value is sign or not.
 * @n: this the argument
 * Author: mohaomar4950
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('_');
		_putchar(',');
		_putchar(' ');
		return(-1);
	}
}
