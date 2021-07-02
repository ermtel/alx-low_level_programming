#include "holberton.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 0 if they are equal, positive if s2 is greater and negative if not.
 */

int _strcmp(char *s1, char *s2)
{

	int i, j;

	for (i = 0, j = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++)
	{
		j = s1[i] - s2[i];
		if (j != 0)
			break;
	}
	return (j);
}
