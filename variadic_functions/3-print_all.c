#include "variadic_functions.h"


/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * print_int - Prints a integer
 * @ap: Argument pointer
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}


/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, int));
}


/**
 * print_string - Prints a string
 * @ap: Argument pointer
 */
void print_string(va_list ap)
{
	printf("%s", va_arg(ap, int));
}


/**
 * print_all - print all anything
 * @format: type of args
*/
void print_all(const char * const format, ...)
{

print_type types[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_list ap;
char *separator = "";
int i = 0;
int j = 0;

va_start(ap, format);
while (format && format[i])
{
while (types[j].type)
{
if (*types[j].type == format[i])
{
printf("%s", separator);
types[j].f(ap);
separator = ", ";
}
++j;
}
j = 0;
++i;
}
printf("\n");
va_end(ap);

}