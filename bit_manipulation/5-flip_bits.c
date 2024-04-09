#include "main.h"
/**
 * flip_bits -  returns the number of bits
 * @n: unsig long int
 * @m: unsig long int
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int size;
unsigned long int num;
unsigned long int i;

size = sizeof(n) * 8 - 1;

num = 0;
i = 0;

while (i <= size)
{
if ((n & 1) != (m & 1))
num++;

n = n >> 1;
m = m >> 1;
i++;
	}
return (num);
}
