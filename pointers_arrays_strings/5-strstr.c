#include "main.h"
/**
 *_strstr - function found string in to string
 *@haystack: string
 *@needle: string
 *Return: nil or string you find it
*/
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ("nil");
}
