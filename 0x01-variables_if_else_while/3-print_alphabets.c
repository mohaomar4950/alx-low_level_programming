#include "stdio.h"

/**
 * main - prints combination of lowercase and uppercase alphabets.
 *
 * Return: 0.
 */

int main(void)
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
	putchar('\n');
	return (0);
}
