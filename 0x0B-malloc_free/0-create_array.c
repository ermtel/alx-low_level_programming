#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create an array of @c chars.
 *
 * @size: size of the array.
 * @c: the characters to fill the array.
 *
 * Return: a pointer to the array or NULL on failure.
 */

char *create_array(unsigned int size, char c)
{

	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = c;
	return (buffer);
}
