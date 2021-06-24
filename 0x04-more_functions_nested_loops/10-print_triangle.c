#include "holberton.h"

/**
 * print_triangle - prints a triangle of a specific size.
 *
 * @size: the size of the triangle.
 *
 * Return: Void.
 */

void print_triangle(int size)
{

	int dcount, lcount;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (lcount = 0; lcount < size; lcount++)
		{
			for (dcount = 1; dcount < size - lcount; dcount++)
				_putchar(32);
			for (dcount--; dcount < size; dcount++)
				_putchar(35);
			_putchar(10);
		}
	}
}
