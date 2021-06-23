#include "holberton.h"

/**
 * _islower - check for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is lower else 0.
 */

int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
