#include "main.h"
/**
 * puts_half - fuction affiche the second half of strinf
 * @str: pointer
*/
void puts_half(char *str)
{
	int j = 0, i;

	while (j >= 0)
	{
		if (str[j] == '\0')
			break;
		j++;
	}

	if (j % 2 == 1)
		i = j / 2;
	else
		i = (j - 1) / 2;

	for (i++; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
