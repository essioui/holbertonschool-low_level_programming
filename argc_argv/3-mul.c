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
printf("Error \n");
return (1);
}
result = *argv[1] * *argv[2];
printf("%d\n", result);
return (0);   
}