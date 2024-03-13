#include <stdlib.h>
#include "main.h"
/**
 * 
*/
int _strlen(char *s)
{
    int length = 0;
    while (s[length])
    {
        length++;
    }
    return (length);
    
}

/**
 * 
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s;
    unsigned int length1, length2, i, j, length;
    if (s1 == NULL)
    s1 = "";
    if (s2 == NULL)
    s2 = "";

    length1 = _strlen(s1);
    length2 = _strlen(s2);

    if (n >= (unsigned int)length2)
    {
        length = length1 + length2;
    }
    else
    length = length1 + n;

    s = malloc((length + 1) * sizeof(char));
    if (s == NULL)
    return NULL;
    else{
    for (i = 0; i < length1; i++)
    {
        s[i] = s1[i];
    }
    for (j = 0; j < n && s2[j] != '\0'; j++)
    {
        s[i + j] = s2[j];
    }
    s[i + j] = '\0';
    return (s);
    }
}