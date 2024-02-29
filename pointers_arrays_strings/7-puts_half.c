#include "main.h"
/**
 * puts_half - fuction affiche the second half of strinf
 * @str: pointer
*/
void puts_half(char *str)
{
int i, j, length;
int n;
i = 0;
for (j = 0; str[j] != '\0'; j++)
{
i++;
}
length= i;
n = (length - 1) / 2;
for (n++; n < length; n++)
{
_putchar(str[n]);
}   
}