#include "main.h"

/**
 * print_alphabet_x10 -  Print 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{

char ch;
int i;
i = 10;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}

}
