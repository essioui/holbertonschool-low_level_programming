#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function for double free from arrays double function
 * @grid: arrays two dimensions
 * @height: height of arrays
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
