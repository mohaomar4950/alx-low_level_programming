#include "stdio.h"

/**
 * main - prints all possible combinations of a single-digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int n = 48;

	while (n < 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar(n);
	putchar('\n');
	return (0);
}
