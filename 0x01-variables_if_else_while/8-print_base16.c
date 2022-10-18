#include <stdio.h>

/**
 * main - void
 * Description: prints base 16 system.
 * Author : mohaomar4950
 * Return: 0
 */

int main(void)
{
	char x = 48;
	char a = 'a';

	while (a <= 'f')
	{
		while (x <= 57)
		{
			putchar(x);
			x++;
		}
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
