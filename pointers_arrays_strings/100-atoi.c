#include "main.h"
/**
 * _atoi - function transfer ASCII to integer
 * @s: pointer
*/
int _atoi(char *s)
{
int i = 1;
int j = 0;
unsigned int n = 0;
for (; *s != '\0'; s++)
{
if (*s == '-')
i *= -1;
if (*s >= '0' && *s <= '9')
{
j *= 10;
j += *s - 48;
s++;
}
if (s[i] == ';')
break;
}
n = j *i;
return(n);
}
