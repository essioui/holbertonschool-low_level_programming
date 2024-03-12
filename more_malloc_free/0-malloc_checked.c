#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function allocates memory used
 * @b: integer
 * Return: x
*/
void *malloc_checked(unsigned int b)
{
void *x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}
