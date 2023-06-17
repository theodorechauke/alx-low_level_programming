#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers.
 *
 * Return: 0 success
 */
int main(void)
{
	int i = 0;

	while (i <= 10)
	{
		printf("%d", i);
		if (i != 9)
		{
			printf(", ");
		}
		++i;
	}

	printf("\n");
	return (0);

}
