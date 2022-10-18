#include <stdio.h>

/**
 * main - void
 * Description: prints number of base 10 separated by commas
 * Author: mohaomar4950
 * Return: 0
 */

int main(void)
{
	char c = 48;

	while (c <= 57)
	{
		if (c != 57)
		{
			putchar(c);
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar(57);
	return (0);
}
