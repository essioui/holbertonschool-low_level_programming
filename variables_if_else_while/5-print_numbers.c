#include <stdio.h>
/**
 * main - Prints the numbers less 10.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
while (i < 10)
{
printf("%d", i);
if (i < 9)
{
printf(", ");
}
i++
}
printf("\n");
return (0);
}
