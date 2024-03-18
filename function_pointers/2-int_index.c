#include "function_pointers.h"
/**
 * int_index - function
 * @array: pointer to an integer array
 * @size: size of the array
 * @cmp: pointer to a function 
 * Return: 0 or index of arrays
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
