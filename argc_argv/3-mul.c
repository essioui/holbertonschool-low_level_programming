#include <stdio.h>
/**
 *main - print the result of the multiplication
 *@argc: length
 *@argv: string
 *Return: 0 or 1 
*/
int main(int argc, char *argv[])
{
int result;
if (argc < 2)
{
printf("Error");
return (1);
}
result = *argv[1] * *argv[2];
printf("%d", result);
return (0);   
}