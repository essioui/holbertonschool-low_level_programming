#include "main.h"
/**
 * rev_string - function for reverse string
 * @s: pointers
 */
void rev_string(char *s)
{
char temp;
int i, j, length;
int a, b, c;


i = 0;
for (j = 0; s[j] != '\0'; j++)
{
i++;
}
length = i;

b = 0;
c = length - 1;
for (a = b; a < c; a++)
{
temp = s[a];
s[a] = s[c];
s[c] = temp;
c--;
}

}
