#include <stdio.h>
#include "main.h"

/**
 * _isalpha - returns int value
 * Description: checks whether a given character is alphabet
 * @c: takes a given character and checks
 * Author: mohaomar4950
 * Return: 1 or 0 based on the result
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
