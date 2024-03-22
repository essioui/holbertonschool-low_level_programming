#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print string
 * @separator: string
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list count;
unsigned int i;
char *str;


va_start(count, n);
for (i = 0; i < n; i++)
{
str = va_arg(count, char *);
if (str == NULL)
printf("nil");
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(count);
}
