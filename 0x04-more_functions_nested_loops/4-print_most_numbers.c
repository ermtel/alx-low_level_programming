#include "holberton.h"

/**
 * print_most_numbers - print the numbers (o-9 except 2 and 4).
 *
 * Return: Void.
 */

void print_most_numbers(void)
{

	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if ((digit == 50) || (digit == 52))
			continue;
		else
			_putchar(digit);
	}
	_putchar(10);
}
