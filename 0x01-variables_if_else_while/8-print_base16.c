#include "stdio.h"

/**
 * main - prints all single numbers of base 16.
 *
 * Return: 0.
 */

int main(void)
{
	int n = 48;
	char alpha = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
