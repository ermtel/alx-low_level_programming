#include "holberton.h"

/**
 * _strncpy - copy a string from source to destination.
 *
 * @dest: the destination of the string to be copied to.
 * @src: the source of the string to be copied.
 * @n: the number of bytes to be copied.
 *
 * Return: the pointer to the destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *buff = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (buff);
}
