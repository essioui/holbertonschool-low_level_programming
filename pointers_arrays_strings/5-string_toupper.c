#include "main.h"
/**
 * tring_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer
 * Return: s letters uppercase
*/
char *string_toupper(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) = *(s + i) - 32;
}
i++;
}
return (s);
}