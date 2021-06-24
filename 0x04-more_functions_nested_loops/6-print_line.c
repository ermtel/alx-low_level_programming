#include "holberton.h"

/**
 * print_line - prints a line of a specific length.
 *
 * @n: the length of the line.
 *
 * Return: Void.
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
