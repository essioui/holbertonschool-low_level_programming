#include <stdio.h>

/**
 * main - the sum of all the multiples of 3 or 5 below 1024.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}

	printf("%d\n",j);

	return (0);
}
