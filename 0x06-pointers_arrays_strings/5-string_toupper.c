#include "holberton.h"

/**
 * string_toupper - convert lower case letters to upper.
 *
 * @s: the string to be converted.
 *
 * Return: the converted string.
 */

char *string_toupper(char *s)
{

	int i;
	char *buffer = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] < 123) && (s[i] > 96))
			s[i] = s[i] - 32;
	}
	return (buffer);
}
