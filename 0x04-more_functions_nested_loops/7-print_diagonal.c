#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line of a specific length.
 *
 * @n: the length of the diagonal line.
 *
 * Return: Void.
 */

void print_diagonal(int n)
{

	int dcount, lcount;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (lcount = 0; lcount < n; lcount++)
		{
			for (dcount = 0; dcount < lcount; dcount++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
