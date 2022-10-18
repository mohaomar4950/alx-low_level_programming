#include <stdio.h>

/**
 * main - prints out lowercase alphabets
 * Description: priints a lwercase aphabets using putchar function
 * Author: mohaomar4950
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
