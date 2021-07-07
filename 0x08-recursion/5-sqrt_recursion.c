#include "holberton.h"

/**
 * sqrt_wrapper - calculates the natural square root.
 * @n: the number.
 * @guess: guess number of the square root.
 *
 * Return: @guess or -1.
 */

int sqrt_wrapper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess >= n)
		return (-1);
	else
		return (sqrt_wrapper(n, guess + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root.
 * @n: the number.
 *
 * Return: the square root or -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (-1);
	else
		return (sqrt_wrapper(n, 1));
}
