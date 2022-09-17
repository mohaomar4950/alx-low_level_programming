#include "stdio.h"
#include "time.h"
#include "stdlib.h"

/**
 * main - it prints the last digit of a random number.
 * description - determines the last digit of number.
 * Return 0.
 */



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ( lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return 0;
}