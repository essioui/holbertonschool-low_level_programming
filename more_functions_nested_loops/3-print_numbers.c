#include "main.h"
/*
 * print_numbers - function print numbers 1 to 9 in one line
 *
 * Return: return numbers
 **/
void print_numbers(void)
{

int i;

for (i = 0; i <= 9; i++)
{
_putchar(i+ '0');
}

_putchar('\n');
}
