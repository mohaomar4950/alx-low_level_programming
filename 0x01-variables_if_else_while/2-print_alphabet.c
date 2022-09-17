#include "stdio.h"

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0;
 */

int main(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
