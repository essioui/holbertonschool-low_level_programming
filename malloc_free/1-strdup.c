#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - function allocating memory, and returns a pointer
 * @str: pointer of string
 * Return: null or r;
*/
char *_strdup(char *str)
{
char *ch;
int i, j =0;
if (str == NULL)
{
    return (NULL);
}
i = 0;
while (str[i] != '\0')
i++;
ch = malloc(sizeof(ch) * (i + 1));
if (ch == NULL)
return (NULL);
for (j = 0; str[j]; j++)
{
    ch[j] = str[i];
}
return (ch);

}