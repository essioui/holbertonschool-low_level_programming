#include "main.h"
/**
 *puts2 - function print half of string
 *@str: pointer
 */
void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
    if (a % 2 != 0)
    {
        continue;
    }
    
_putchar(str[a]);
}
_putchar('\n');
}
