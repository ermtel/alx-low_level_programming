#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array.
 * @array: elements of the array.
 * @size: size of the array.
 * @action: pointer to the function to be used.
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		exit(1);
	if (action == NULL)
		exit(1);
	for (i = 0; i < size; i++)
		action(array[i]);
}
