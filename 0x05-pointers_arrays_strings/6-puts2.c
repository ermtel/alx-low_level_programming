#include "holberton.h"

/**
 * puts2 - prints every other  string followed by a new line.
 *
 * @str: the string to be printed.
 *
 * Return: void.
 */

void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar(10);
}
