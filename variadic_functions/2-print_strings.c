#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: string
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list count;
char *str;
unsigned int i;
va_start(count, n);

for (i = 0; i < n; i++)
{
str = va_arg(count, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(count);
}
