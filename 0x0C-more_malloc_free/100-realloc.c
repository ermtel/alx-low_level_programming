#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: the pointer to the old memory allocated.
 * @old_size: the size, in bytes of the allocated space for @ptr.
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: a pointer to the reallocated memory or NULL upon failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	unsigned int i;
	char *buffer, *old_buffer;

	old_buffer = ptr;
	if ((new_size == old_size) && (ptr != NULL))
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	buffer = malloc(new_size);
	if (buffer == NULL)
		return (NULL);
	if (ptr == NULL)
		return (buffer);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			buffer[i] = old_buffer[i];
		free(ptr);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			buffer[i] = old_buffer[i];
		free(ptr);
	}
	return (buffer);
}
