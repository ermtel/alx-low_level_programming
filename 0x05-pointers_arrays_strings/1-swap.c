#include "holberton.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first argument to be swaaped.
 * @b: second argument to be swapped.
 *
 * Return: Void.
 */

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
