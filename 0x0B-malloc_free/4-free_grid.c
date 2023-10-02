#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* free_grid - a function that frees a 2 dimensional grid previously
* created by your alloc_grid function,
* followed by a new line.
*
* @grid: Pointer to a 2 dimensional array.
* @height: height of the 2D array.
*
* Return: always void.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
