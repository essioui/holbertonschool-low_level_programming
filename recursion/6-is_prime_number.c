#include "main.h"
/**
 * other - second function for output number
 * is_prime_number - function for prime number
 * @n: integer
 * @i: integer
 * @j: integer
 * Return: 1 or 0
*/


int other(int n, int i, int j)
{
if ((n % i == 0 && i <= j) || n < 0 || n == 1)
return (0);
else if (n % i != 0 && i <= j)
return (other(n, i + 1, j));
else
return (1);
}


int is_prime_number(int n)
{
return (other(n, 2, n / 2));
}
