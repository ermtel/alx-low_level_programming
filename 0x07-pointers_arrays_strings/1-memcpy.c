#include "holberton.h"

/**
 * _memcpy - copies the first @n bytes of the memory
 *           pointed by @src to the memory pointed by @dest.
 *
 * @dest: a pointer to the destination memory area.
 * @src: a pointer to the source memory area.
 * @n: the number of bytes to be copied.
 *
 * Return: a pointer to the copied memory area @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
