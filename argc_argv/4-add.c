#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - adds positive numbers
 *@argc: length string
 *@arcv: string
 *Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int i, j, add = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
add = add + atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
