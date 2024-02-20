#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter the number n: ");
	scanf("%d", &n);
	if (A > 0)
		printf("%d is positive.", n);
	else if (A < 0)
		printf("%d is negative.", n);
	else if (A == 0)
		printf("%d is zero.", n);
	return (0);
}
