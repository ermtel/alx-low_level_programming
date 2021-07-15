#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers with ordered values
 *               from @min to @max inclusive.
 *
 * @min: the minimum value of the array.
 * @max: the maximum value of the array.
 *
 * Return: pointer to the array or NULL upon failure.
 */

int *array_range(int min, int max)
{

	int i, j, size;
	int *buffer;

	if (min > max)
		return (NULL);
	size  = (max - min) + 1;
	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0, j = min; i < size; i++, j++)
		buffer[i] = j;
	return (buffer);
}
