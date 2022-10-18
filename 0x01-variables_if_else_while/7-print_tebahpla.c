#include <stdio.h>

/**
 * main - void
 * Description: prints alphabets in reverse order.
 * Author: mohaomar4950
 * Return: 0
 */

int main(void)
{
	char r = 'z';

	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar(10);
	return (0);
}
