#ifndef VARIAD
#define VARIAD


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function print
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);


#endif
