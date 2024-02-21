#include <stdio.h>
/**
 * main - letters except
 *
 * Return: Always (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
