#include "holberton.h"

/**
 * reverse_array - reverse an array.
 *
 * @a: the array to be reversed.
 * @n: the number of elements of the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{

	int temp = 0, j;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}
