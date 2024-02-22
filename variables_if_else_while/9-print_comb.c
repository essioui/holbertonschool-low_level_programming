#include <stdio.h>
/**
 * main - changes numberz
 *
 * Return: Always (Success)
 */
int main(void)
{
int i;
int j = 0;
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
}
for (j = 0 ; j < 9 ; j++)
{
putchar(j);
}
putchar ('\n');
return (0);
}
