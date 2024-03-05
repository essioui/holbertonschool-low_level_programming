#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string
 * @accept: string
 * Return: null if not found else (s + i)
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; *(s + i); i++)
{
for (j = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
{
break;
}
}
if (*(accept + j) != '\0')
{
return (s + i);
}
}
return ("nil");
}
