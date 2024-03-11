#include <stdlib.h>
#include "main.h"
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


