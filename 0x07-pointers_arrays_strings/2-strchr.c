#include "holberton.h"

/**
 * _strchr - locate a character in a string.
 *
 * @s: the string to be searched.
 * @c: the character to be found.
 *
 * Return: a pointer to the first occurence of @c.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c; s++)
		;
	if (*s == c)
		return ((char *) s);
	else
		return (0);
}
