#include <stdio.h>
#include <stdlib.h>
/**
 *main - give parameters to programs
 *@argc: length of string
 *@argv: string
 *Return: 0
*/
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
