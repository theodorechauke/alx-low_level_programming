#include "main.h"

/**
 * print_diagonal - Draw a diagonal ine on the terminal
 * @n: The number of lines to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)

{
	int x, y;

	if (n <= 0)
	{
		else
		}
	_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putcahr(32);
			_putchar('\n');
		}
	}
}

