#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char.
 *
 * @s: pointer to a string.
 * @to: the string.
 * Return: void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
