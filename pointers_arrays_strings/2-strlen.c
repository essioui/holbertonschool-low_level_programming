#include "main.h"
/**
 * _strlen - function calc length of string
 * @s: pointer
 * Return: i length of string
 */
int _strlen(char *s)
{
int c, i;
i = 0;
for (c = 0; s[c] != '\0'; c++)
i++;
return (i);
}
