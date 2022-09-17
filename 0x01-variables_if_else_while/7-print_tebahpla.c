#include "stdio.h"

/**
 * main - print lowercase alphabets in reverse.
 *
 * Return: 0.
 */


int main(void)
{
	char ahpla = 122;

	while (ahpla >= 97)
	{
		putchar(ahpla);
		ahpla--;
	}
	putchar('\n');
	return (0);
}
