#include <stdio.h>

/**
 * main - void
 * Description: prints out numbers in base 10 system.
 * Author: mohaomar4950
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
