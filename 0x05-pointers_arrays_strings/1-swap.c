#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: The first interger to be swappped
 * @b: The second integer to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integer */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
