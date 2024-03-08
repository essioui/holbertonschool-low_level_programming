#include <stdio.h>
#include <stdlib.h>
/**
 *main - function for prints the number of arguments
 *@argc: length of string
 *@argv: string
 *Return: 0
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
