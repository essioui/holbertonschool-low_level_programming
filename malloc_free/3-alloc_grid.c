#include <stdlib.h>
#include "main.h"
/**
 * 
*/
int **alloc_grid(int width, int height)
{
int **grid, i, j;
int len = width * height;

if (len <= 0)
return (NULL);
grid = (int **)malloc(sizeof(int) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (i--; i >= 0; i--)
{
free(grid[i]);
free(grid);
return (NULL);
}
}
}
for (i = 0; i < height; i++)
for (j = 0; i < width; i++)
{
    grid[i][j] = 0;
}
return (grid);
}