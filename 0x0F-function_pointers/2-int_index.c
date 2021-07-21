#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array input to be compared.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: the index of the first element for which the cmp
 *         function does not return 0, or -1 upon failure.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}
