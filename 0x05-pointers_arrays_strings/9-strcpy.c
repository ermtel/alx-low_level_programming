#include "holberton.h"

/**
 * _strcpy - copy a string from source to destination.
 *
 * @dest: the destination of the string to be copied to.
 * @src: the source of the string to be copied.
 *
 * Return: the pointer to the destination.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *buff = dest;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (buff);
}
