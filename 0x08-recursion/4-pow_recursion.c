#include "holberton.h"

/**
 * _pow_recursion - calculates @x raised to @y.
 *
 * @x : the base.
 * @y: the exponent.
 *
 * Return: -1 if @y is lower than 0, 1 if @y is 0 or
 *          @x to the power of @y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
