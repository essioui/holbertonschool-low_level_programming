#include "main.h"
/**
 *print_rev - function for print string from inverse
 *@s: ponter
*/
void print_rev(char *s)
{
int i, j, length;
i = 0;
for (j = 0; s[j]; j++)
{
i++;
}
length = i;
for (j = length - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
