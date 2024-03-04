#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: integer
 * Return: p
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned i = 0;
char p = *s;
while (i < n)
{
*s++ = b;
i++;
}
return (p[i]);
}