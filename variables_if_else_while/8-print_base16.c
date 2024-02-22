#include <stdio.h>
/**
 * main - use thre putchar
 *
 * Return: Always (Success)
 */
int main(void)
{
char ch, j;
for (ch = 0 ; ch <= 9 ; ch++)
{
putchar(ch);
}
for (j = 'a'; j <= 'f' ; j++)
{
putchar(j);
}
putchar ('\n');
return (0);
}
