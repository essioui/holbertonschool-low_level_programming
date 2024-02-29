#include "main.h"
/**
*/
void puts_half(char *str)
{
    int i, j, length;
    int n, b;
    i = 0;
    for (j = 0; str[j] != '\0'; j++)
    {
        i++;
    }
    length = i;
    n = (length - 1) / 2;

    for (b = n + 1; b < length; b++)
    {
        _putchar(str[b]);
    }
    
    
}