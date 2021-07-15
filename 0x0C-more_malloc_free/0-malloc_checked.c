#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 *
 * @b: the size of the memory.
 *
 * Return: a pointer to allocated memory or 98.
 */

void *malloc_checked(unsigned int b)
{
	char *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
		exit(98);
	return (buffer);
}
