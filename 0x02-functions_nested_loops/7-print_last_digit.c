#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - returns int value.
 * Description: prints last digit of a given number.
 * @n: given number to check its last number.
 * Author: mohaomar4950
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;
	int ld;

	if (n < 0)
	{
		last_digit *= -1;
	}
	ld = last_digit;
	_putchar(ld + '0');

	return (last_digit);
}
