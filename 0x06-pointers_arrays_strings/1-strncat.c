#include "holberton.h"

/**
 * _strncat - concatenate two strings.
 *
 * @dest: the destination.
 * @src: the source.
 * @n: the number of bytes to use from source.
 *
 * Return: the pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *buff = dest;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; (j < n) && (src[j] != '\0'); j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (buff);
}
