#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the address of the number.
 * @index: the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || n == NULL)
		return (-1);
	*n = (*n & (~(1 << index)));
	return (1);
}
