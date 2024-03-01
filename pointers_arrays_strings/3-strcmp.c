#include "main.h"
/**
 * _strcmp - function for comparaison between two strings
 * @s1: string
 * @s2: string
 * Return: j the result of compare two strings
*/
int _strcmp(char *s1, char *s2)
{
int i, j;
i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
j = s1[i] - s2[i];
return (j);
}