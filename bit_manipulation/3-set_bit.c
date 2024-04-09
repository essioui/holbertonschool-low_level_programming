#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer
 * @index: index
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int size;
unsigned long int num;

size = sizeof(*n) * 8 - 1;

if (index > size)
return (-1);

num = 1 << index;

*n = num | *n;

return (1);
}
