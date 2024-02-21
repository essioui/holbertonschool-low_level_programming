#include <stdio.h>
/**
 * main - Prints the numbers less 10.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
for (i = 0 ; i < 10 ; i++)
{
printf("%d", i);
if (i < 9)
{
printf(", ");
}
}
printf("\n");
return (0);
}
