#include "stdio.h"

/**
 * main - prints the alphabets without q and e.
 *
 * Return: 0.
 */

int main(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		if (alpha != 101 && alpha != 113)
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
