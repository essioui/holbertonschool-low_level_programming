#include "main.h"
/**
 * *_memset - ills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: integer
 * Return: p
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned i = 0;
char p = *s;
while (i < b)
{
*s++ = b;
i++;
}
return (p);
}