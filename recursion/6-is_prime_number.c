#include "main.h"
/**
 * other - second function for output number

 * @i: integer
 * @j: integer
 * Return: 1 or 0
*/


int other(int a, int b)
{
if ((a <= 1) || (a != b && a % b == 0))
{
    return (0);
}
else
if (a == b)
{
    return (1);
}
return (other(a, b + 1));
}

/**
 *is_prime_number - function for prime number
 *@n: integer
*/
int is_prime_number(int n)
{
return (other(n, 2));
}
