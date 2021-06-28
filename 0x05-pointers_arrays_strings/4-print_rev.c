#include "holberton.h"

/**
 * print_rev - print a string in reverse followed by a new line.
 *
 * @s: the string to be printed.
 *
 * Return: void.
 */

void print_rev(char *s)
{

	int i, l;

	for (i = 0; s[i] != '\0'; i++)
		l++;
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
