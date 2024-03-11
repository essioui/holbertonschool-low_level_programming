#include <stdlib.h>
#include "main.h"
/**
 * *create_array - function for create array
 * @size: integer number for length c
 * @c: array
 * Return: ar or null
*/
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
ar = malloc(size * sizeof(char));
if (ar == 0 || size == 0)
{
return ('\0');
}
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}


