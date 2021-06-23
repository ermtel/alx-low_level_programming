#include "holberton.h"

/**
 * print_times_table - prints the n times table.
 *
 * @n: the number of the times table.
 *
 * Return: Void.
 */

void print_times_table(int n)
{
	int i, j, k;

	for (j = 0; j <= n; j++)
	{
		if ((n > 15) || (n < 0))
			break;

		_putchar(48);
		for (k = 1; k <= n; k++)
		{
			i = j * k;
			_putchar(',');
			_putchar(' ');
			if (i <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + i);
			}
			else if (i <= 99)
			{
				_putchar(' ');
				_putchar(48 + (i / 10));
				_putchar(48 + (i % 10));
			}
			else
			{
				_putchar(48 + (i / 100));
				_putchar(48 + ((i % 100) / 10));
				_putchar(48 + ((i % 100) % 10));
			}
		}
	}
	_putchar('\n');
}
