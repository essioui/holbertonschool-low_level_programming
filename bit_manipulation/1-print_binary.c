#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: long integer
*/
void print_binary(unsigned long int n)
{
signed long int size;
char c;
int num;

size = sizeof(n) * 8 - 1;

if (n == 0)
{
printf("0");
return;
}

if (n == 1)
{
printf("1");
return;
}
num = 0;

while (size >= 0)
{
c = (n >> size) &1;

if (num == 1)
putchar(c + '0');
else
{
if (c == 1)
{
putchar(c + '0');
num = 1;
}
}
size -= 1;
}
}
