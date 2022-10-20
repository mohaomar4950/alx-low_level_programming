#include <stdio.h>
#include "main.h"

/**
 * _abs - return n
 * Description: gives absolute value of number
 * @n: n is the given number to check
 * Author: mohaomar4950
 * Return: n
 */


int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
