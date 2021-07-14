#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 *           allocated memory containing @str.
 *
 * @str: the string to be duplicated.
 *
 * Return: on success a pointer to a
 *         duplicate of @str or NULL on failure.
 */

char *_strdup(char *str)
{

	unsigned int j, length;
	char *buffer;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	buffer = (char *)malloc(sizeof(char) * (length + 1));
	if (buffer == NULL)
		return (NULL);
	for (j = 0; j <= length; j++)
		buffer[j] = str[j];
	return (buffer);
}
