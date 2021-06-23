#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet ten times
 *
 * Return: Void.
 */

void print_alphabet_x10(void)
{
	int alpha, count;
	for (count = 0; count < 10; count++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
