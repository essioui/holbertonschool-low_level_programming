#include <stdlib.h>
#include "main.h"
/**
 * *array_range - create an array of integers
 * @min: min of arrays
 * @max: max of arrays
 * Return: s or null
*/
int *array_range(int min, int max)
{
int *s;
int i, range;

if (min > max)
return (NULL);

range = max - min + 1;
s = malloc(sizeof(*s) * range);
if (s == NULL)
return (NULL);
i = 0;
while (i < range)
{
s[i] = min;
min++;
i++;
}
return (s);
}
