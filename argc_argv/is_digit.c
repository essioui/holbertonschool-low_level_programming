#include "main.h"
/**
*_isdigit - function
*@c: entier
*Return: 1 if uppercase 0 if no
*/

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}