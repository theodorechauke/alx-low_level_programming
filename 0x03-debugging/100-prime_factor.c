#include <stdio.h>
#include <math.h>

/**
 * main -  prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)

{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 2; x <= square; x++)
	{
		while (number % x == 0)
		{
			maxf = x;
			maxf = number / x
	}
	}

	if (number > 1)
	{
		maxf = number;
	}

	printf("%ld\n", maxf);
	return (0);
}
