#include "main.h"
/**
 * reverse_array - everses the content of an array of integers
 * @a: pointer
 * @n: integer
*/
void reverse_array(int *a, int n)
{
int i, j, k;
j = 0;
k = n - 1;
while (j < k)
{
i = *(a + j);
*(a + j) = *(a + k);
*(a + k) = i;
j++;
k--;
}
}