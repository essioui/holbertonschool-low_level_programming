#include "main.h"
/**
 *actorial - calcul n number with factorial
 *@n: integer
 *Return: 0 if under or -1 if egual zero or number factorial
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
