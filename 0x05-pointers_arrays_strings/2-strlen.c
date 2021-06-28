#include "holberton.h"

/**
 * _strlen - measure the length of a string.
 *
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{

	int i, l;

	for (i = 0; s[i] != '\0'; i++)
		l++;
	return (l);
}
