#include "main.h"
/**
 * sqrt_1 - function square between two numbers
 * @a: integer
 * @b: integer
 * Return: number
*/
int sqrt_1(int a, int b)
{
if (b * b == a)
{
return (b);
}
else
if (b * b > a)
{
return (-1);
}
return (sqrt_1(a, b + 1));
}
/**
 * _sqrt_recursion - function for sqrt
 * @n: integer
 * Return: natural square
*/
int _sqrt_recursion(int n)
{
return (sqrt_1(n, 0));
}