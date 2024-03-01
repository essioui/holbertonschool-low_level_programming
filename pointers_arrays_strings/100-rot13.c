#include "main.h"
/**
 * rot13 - encodes string.
 * @s: string.
 *
 * Return: s.
 */
char *rot13(char *s)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0;
int j;
while (*(s + i) != '\0')
{
for (j = 0; j <= 51; j++)
{
if (*(s + i) == a[j])
{
*(s + i) = rot[j];
break;
}
}
i++;
}
return (s);
}
