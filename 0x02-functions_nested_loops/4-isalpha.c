#include "holberton.h"

/**
 * _isalpha - check for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter else 0.
 */

int _isalpha(int c)
{
	if (((c <= 122) && (c >= 97)) || ((c <= 90) && (c >= 65)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
