#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: The name to be printed
 * @f: Pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
