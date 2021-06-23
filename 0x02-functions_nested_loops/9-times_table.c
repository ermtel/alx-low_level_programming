#include "holberton.h"

/**
 * times_table - prints the 9 times table.
 *
 */

void times_table(void)
{
	int i, j, k;

	for (j = 0; j <= 9; j++)
	{
		_putchar(48);
		for (k = 1; k <= 9; k++)
		{
			i = j * k;
			_putchar(',');
			_putchar(' ');
			if (i <= 9)
			{
				_putchar(' ');
				_putchar(48 + i);
			}
			else
			{
				_putchar(48 + (i / 10));
				_putchar(48 + (i % 10));
			}
		}
		_putchar('\n');
	}
}
