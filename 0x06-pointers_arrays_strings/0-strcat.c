#include "holberton.h"

/**
 * _strcat - concatenate two strings.
 *
 * @dest: the destination.
 * @src: the source.
 *
 * Return: the pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{

	int i, j, k;
	char *buff = dest;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = i, k = 0; src[k] != '\0'; j++, k++)
		dest[j] = src[k];
	dest[j] = src[k];
	return (buff);
}
