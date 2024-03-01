#include "main.h"
/**
 * _toi - function transfer ASCII to integer
 * @s: pointer
 * Return: return integer
*/
int _atoi(char *s)
{
int i = 1;
int j = 0;
int n = 0;
for (; *s != '\0'; s++)
{
if (*s == '-')
i *= -1;
else
if (*s >= '0' && *s <= '9')
break;
}
while (*s >= '0' && *s <= '9')
{
j *= 10;
j += *s - 48; // 48 en code ASCII equivaut '0'
s++;
}
if (i == -1)
n = -j;
else
n = j;
return(n);
}

