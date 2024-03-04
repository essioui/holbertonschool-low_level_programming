#include "main.h"
/**
 * _strspn - the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: j
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int j = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
j++;
break;
}
else 
if ((accept[i + 1]) == '\0')
return (j);
}

s++;
}
return (j);
}