#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the result of the multiplication
 *@argc: length
 *@argv: string
 *Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int i;
int j;
if (argc < 3)
{
printf("%s\n", "Error");
return (1);
}
i = atoi(argv[1]); /*function transfer from ACCII to integer*/
j = atoi(argv[2]); /*function transfer from ASCII to integer*/
printf("%d\n", i * j);
return (0);
}