#include "holberton.h"

/**
 * print_alphabet - print the alphabet in small letters
 *
 * Return: Void.
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar(10);
}
