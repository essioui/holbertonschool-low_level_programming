#include "main.h"
/**
 * 
*/
char *_strchr(char *s, char c)
{
unsigned int i;
while (s[i])
{
    if (s[i] == c)
    break;
    i++;
}
return (s[i] || c == '\0' ? (s +i) : "nil");
}
