#include "main.h"
/**
 * print_diagonal - function print n space than \
 * @n: entier
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
_putchar(' ');
_putchar('\\');
}
_putchar('\n');
}
