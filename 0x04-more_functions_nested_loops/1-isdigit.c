#include "holberton.h"

/**
 * _isdigit - check if the character is a digit (0-9).
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit else 0.
 */

int _isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
