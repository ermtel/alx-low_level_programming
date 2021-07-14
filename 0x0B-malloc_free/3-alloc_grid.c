#include "holberton.h"
#include <stdlib.h>

/**
 * freegrid - frees allocated memory of a 2d array.
 *
 * @grid: the 2d array.
 * @height: the height of the grid.
 *
 * Return: void.
 */

void freegrid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

/**
 * alloc_grid - create a 2d array of integers.
 *
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: a pointer to the 2d array or NULL on failure.
 */

int **alloc_grid(int width, int height)
{

	int **buffer;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	buffer = (int **)malloc(height * sizeof(int *));
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		buffer[i] = (int *)malloc(width * sizeof(int));
		if (buffer[i] == NULL)
		{
			freegrid(buffer, i);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	return (buffer);
}
