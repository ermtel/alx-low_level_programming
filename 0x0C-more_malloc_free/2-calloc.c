#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and initialize to 0.
 *
 * @nmemb: the array size.
 * @size: the byte size of each member of the array.
 *
 * Return: pointer to the allocated memory or NULL upon
 *         failure or if either @nmemb or @size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *buffer;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		buffer[i] = 0;
	return (buffer);
}
