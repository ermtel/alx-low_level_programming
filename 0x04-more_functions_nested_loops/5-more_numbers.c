#include "holberton.h"

/**
 * more_numbers - print the numbers (o-14) ten times.
 *
 * Return: Void.
 */

void more_numbers(void)
{

	int digit, count, fd;

	for (count = 0; count <= 9; count++)
	{
		for (fd = 0; fd <= 1; fd++)
		{
			for (digit = 48; digit <= 57; digit++)
			{
				if ((fd == 1) && (digit >= 53))
					break;
				if (fd == 1)
				{
					_putchar(49);
				}
				_putchar(digit);
			}
		}
		_putchar(10);
	}
}
