#include "holberton.h"

/**
 * _abs - finds the absolute value of a number
 * @n: The number to be checked
 *
 * Return: n if n is positive, -n if negative.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
