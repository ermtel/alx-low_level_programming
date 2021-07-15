#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings.
 *
 * @s1: the destination.
 * @s2: the source.
 * @n: the number of bytes to use from source.
 *
 * Return: the pointer to a newly allocated space in memory,
 *         containing @s1 followed by the first @n bytes of @s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, length1, length2;
	char *buff;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;
	if (n > length2)
		n = length2;
	buff = malloc(sizeof(char) * (length1 + n + 1));
	if (buff == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		buff[i] = s1[i];
	for (j = length1, i = 0; j < (length1 + n); j++, i++)
		buff[j] = s2[i];
	buff[j] = '\0';
	return (buff);
}
