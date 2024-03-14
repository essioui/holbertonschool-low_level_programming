#include <stdlib.h>
#include "main.h"
/**
* *_calloc - fuction allocate in the memory for arrays
 * @nmemb: integer
 * @size: integer
 * Return: arrays or null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointers;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
pointers = malloc(nmemb * size);
if (pointers == NULL)
{
return (NULL);
}
i = 0;
while (i < nmemb * size)
{
pointers[i] = 0;
i++;
}
return (pointers);
}
