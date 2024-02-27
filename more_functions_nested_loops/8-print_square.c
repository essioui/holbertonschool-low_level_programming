#include "main.h"
/**
 * print_square - function for typing square
 * @size: length for square
 **/
void print_square(int size)
{
int i = 0;
int  j = 0;
if (size > 1)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
_putchar('#');
_putchar('\n');
}
}
}
