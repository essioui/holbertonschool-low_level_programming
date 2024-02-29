#include "main.h"
/**
*/
void puts_half(char *str)
{
    int i, j, length;
    int b;
    i = 0;
    for (j = 0; str[j] != '\0'; j++)
    {
        i++;
    }
    length = i;

    for (b = 4; b < length; b++)
    {
        _putchar(str[b]);
    }
    
    
}