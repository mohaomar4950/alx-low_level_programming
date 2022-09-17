#include "stdio.h"

/**
 * main - prints combination of lowercase and uppercase alphabets.
 *
 * Return: 0.
 */

int main()
{
	char i = 97;
	char j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	return (0);
}
