#include "holberton.h"

/**
 * _isupper - check for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase else 0.
 */

int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
