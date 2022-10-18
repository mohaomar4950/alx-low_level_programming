#include <stdio.h>

/**
 * main - prints out alphabets
 * Description: outputs alphabtes lowercase and uppercase.
 * Author: mohaomar4950
 * Return: 0
 */
int main(void)
{
	char A = 'A';
	char a = 'a';

	while (A <= 'Z')
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar(A);
		A++;
	}
	putchar(10);
	return (0);
}
