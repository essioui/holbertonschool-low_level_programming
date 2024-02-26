#include "main.h"
/*
 * _isdigit - function for checks digit
 * @c: entier
 * Return: 0 or 1
 **/

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
