#include "holberton.h"

/**
 * print_number - prints integer numbers.
 *
 * @n: the integer to be printed.
 *
 * Return: Void.
 */

void print_number(int n)
{
	unsigned int i, j, k;

	if (n < 0)
	{
		_putchar('-');
		j = n * -1;
	}
	else
		j = n;
	k = j;
	for (i = 1; k > 9; k = k / 10)
		i = i * 10;
	for (; i >= 1; i = i / 10)
		_putchar(((j / i) % 10) + 48);
}
