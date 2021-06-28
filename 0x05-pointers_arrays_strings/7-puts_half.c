#include "holberton.h"

/**
 * puts_half - prints half of a string followed by a new line.
 *
 * @str: the string to be printed.
 *
 * Return: void.
 */

void puts_half(char *str)
{

	int i, l, p;

	for (i = 0; str[i] != '\0'; i++)
		l++;
	if (l % 2 == 0)
		p = l / 2;
	else
	{
		p = (l - 1) / 2;
		p++;
	}
	for (i = p; i < l; i++)
		_putchar(str[i]);
	_putchar(10);
}
