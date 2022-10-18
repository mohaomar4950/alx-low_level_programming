#include <stdio.h>

/**
 * main - void
 * Description: printsalphabets without q and e.
 * Author: mohaomar4950
 * Return: 0.
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
			a++;
		}
	}
	putchar(10);
	return (0);
}
