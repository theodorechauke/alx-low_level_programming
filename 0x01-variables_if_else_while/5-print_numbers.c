#include <stdio.h>

/**
 * main - Entry point
 *
 * Retrun: 0 on success, non-zero on error.
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
