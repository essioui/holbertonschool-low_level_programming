#include "main.h"
/**
 * _atoi - function transfer ASCII to integer
 * @s: pointer
*/
int _atoi(char *s)
{
int i = 0;
int j = 1;
unsigned int n = 0;
for (; s[i] != '\0'; s++)
{
if (s[i] == '-')
j *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
n *= 10;
n += s[i] - 48;
s++;
}
if (s[i] == ';')
break;
}
n = j *i;
return(n);
}
