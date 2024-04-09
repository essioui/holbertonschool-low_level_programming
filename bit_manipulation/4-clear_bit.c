#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: pointer to unsig int
 * @index: index
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int size, num;

size = sizeof(*n) * 8 - 1;

if (index > size)
return (-1);

num = 1 << index;

*n = *n & ~num;

return (1);
}
