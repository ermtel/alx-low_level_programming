#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings.
 *
 * @s1: the destination.
 * @s2: the source.
 *
 * Return: the pointer to the resulting string.
 */

char *str_concat(char *s1, char *s2)
{

	int i, j, k, l;
	char *buff;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (l = 0; s2[l] != '\0'; l++)
		;
	buff = (char *)malloc(sizeof(char) * (i + l + 1));
	if (buff == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		buff[j] = s1[j];
	for (k = 0; k <= l; k++, j++)
		buff[j] = s2[k];
	return (buff);
}
