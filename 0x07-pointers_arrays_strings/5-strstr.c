#include "holberton.h"

/**
 * _strstr - locates a subsubstring in a string.
 *
 * @haystack: the string.
 * @needle: the substring.
 *
 * Return: a pointer to the beginning of the located
 *         substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{

	char *bh, *bn;

	for (; *haystack != '\0'; haystack = bh + 1)
	{
		bh = haystack;
		bn = needle;
		for (; *haystack != '\0' &&
			     *bn != '\0' && *haystack == *bn; bn++)
			haystack++;
		if (*bn == '\0')
			return (bh);
	}
	return (0);
}
