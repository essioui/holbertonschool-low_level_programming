#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int i;
int sum = 0;
va_list count;


if (n == 0)
return (0);



va_start(count, n);

for (i = 0; i < n; i++)
{
sum += va_arg(count, int);
}
va_end(count);
return (sum);
}
