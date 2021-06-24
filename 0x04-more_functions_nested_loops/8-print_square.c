#include "holberton.h"

/**
 * print_square - prints a square of a specific size.
 *
 * @size: the size of the square.
 *
 * Return: Void.
 */

void print_square(int size)
{

	int width, length;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
