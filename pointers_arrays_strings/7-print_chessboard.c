#include "main.h"
/**
*void print_chessboard - function print chessboard
*@a: string
*Description: prints the chessboard for prints the case 
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
