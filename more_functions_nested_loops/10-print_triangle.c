#include "main.h"
/**
 * print_triangle - function for typing triangle with #
 * @size: entier
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (j = size - i + 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
