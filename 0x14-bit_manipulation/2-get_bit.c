#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at @index or -1 upon error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);
	if (n == 0 && index < 64)
		return (0);
	i = ((n >> index) & 1);
	return (i);
}
