#include "holberton.h"

/**
 * prime_wrapper - checks the primality of a number.
 * @n: the number.
 * @guess: guess number to check primality.
 *
 * Return: 1 if prime or else 0.
 */

int prime_wrapper(int n, int guess)
{
	if (n % guess == 0)
		return (0);
	else if (guess >= n / 2)
		return (1);
	else
		return (prime_wrapper(n, guess + 1));
}

/**
 * is_prime_number - checks the primality of a number.
 * @n: the number.
 *
 * Return: 1 if prime or else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_wrapper(n, 2));
}
