#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need
 *             to flip to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 * Return: the number of bits needed to flip to get from
 *         one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int oddbits;
	unsigned int count = 0;

	oddbits = n ^ m;
	while (oddbits)
	{
		count += oddbits & 1;
		oddbits >>= 1;
	}
	return (count);
}
