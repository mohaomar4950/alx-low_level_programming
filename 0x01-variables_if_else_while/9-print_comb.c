#include <stdio.h>

/**
 * main - void
 * Description: prints number of base 10 separated by commas
 * Author: mohaomar4950
 * Return: 0
 */

int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar(10);
	return (0);
}
