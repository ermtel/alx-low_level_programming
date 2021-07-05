#include "holberton.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 *
 * @s: the string to be searched.
 * @accept: the string whose bytes are to be looked for.
 *
 * Return: a pointer to the byte in @s that matches one of
 *         of the bytes in @accept, or NULL if not found.
 */

char *_strpbrk(char *s, char *accept)
{

	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return ((char *) s);
	}
	return (0);
}
