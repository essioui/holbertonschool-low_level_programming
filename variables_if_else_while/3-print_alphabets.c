#include <stdio.h>
/**
 * main - use thre putchar
 *
 * Return: Always (Success)
 */
int main(void)
{
char ch, j;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (j = 'A'; j <= 'Z' ; j++)
{
putchar(j);
}
putchar ('\n');
return (0);
}
