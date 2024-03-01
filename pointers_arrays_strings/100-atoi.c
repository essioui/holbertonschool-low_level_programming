#include "main.h"
/**
 * _atoi - function transfer ASCII to integer
 * @s: pointer
*/
int _atoi(char *s)
{
int i;
int j = 1;
unsigned int n = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
j *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
n *= 10;
n += s[i] - 48;

}
if (s[i] == ';')
break;
}
n = j *i;
return(n);
}
