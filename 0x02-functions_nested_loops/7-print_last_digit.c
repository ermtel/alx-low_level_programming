#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a given integer.
 * @n: the input integer.
 *
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld >= 0)
	{
		_putchar(ld + 48);
		return (ld);
	}
	else
	{
		_putchar((-ld) + 48);
		return (-ld);
	}
}
