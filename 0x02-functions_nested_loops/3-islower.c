#include <stdio.h>
#include "main.h"

/**
 * _islower - prints lowercase letter
 * Description: checks whether a given character is lowercase or not.
 * @c: is the charcater parameter taken by the code to check it.
 * Author: mohaomar4950
 * Return: 1 or 0 based on the result.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
