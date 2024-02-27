#include "main.h"
/*
 * print_line - function for change n of _
 * @n: entier
 **/
void print_line(int n)
{
	int i;
	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		_putchar('_');
	}
	_putchar('\n');
}
