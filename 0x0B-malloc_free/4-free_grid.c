#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees allocated memory of a 2d array.
 *
 * @grid: the 2d array.
 * @height: the height of the grid.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
