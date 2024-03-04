#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: charctere
 * Return: s or nil
*/
char *_strchr(char *s, char c)
{
unsigned int i;
while (s[i])
{
if (s[i] == c)
break;
i++;
}
return ((s[i] || c == '\0') ? (s + i) : "nil");
}
