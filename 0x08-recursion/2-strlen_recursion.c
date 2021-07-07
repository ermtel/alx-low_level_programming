#include "holberton.h"

/**
 * _strlen_recursion - measures the length of a string recursively.
 *
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{

	int i = 1;

	if (*s == 0)
		return (0);
	else
		return (i += _strlen_recursion(s + 1));
}
