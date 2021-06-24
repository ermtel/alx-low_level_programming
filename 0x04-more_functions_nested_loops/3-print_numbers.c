#include "holberton.h"

/**
 * print_numbers - print the numbers (o-9).
 *
 * Return: Void.
 */

void print_numbers(void)
{

	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		_putchar(digit);
	}
	_putchar(10);
}
