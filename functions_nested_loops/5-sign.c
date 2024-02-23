#include "main.h"
/**
 *print_sign - print
 *@c: int
 * Return: 1 is greather, 0 is egal and -1 is less of zero.
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (1);
}
}
