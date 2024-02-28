#include "main.h"
/**
 *swap_int - fuction for swap continu of adress
 *@a: pointer
 *@b: pointer
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
