#include "holberton.h"

/**
 * rev_string - reverse a string.
 *
 * @s: the string to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{

	int temp = 0, j, length;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (j = 0; j < length / 2; j++)
	{
		temp = s[j];
		s[j] = s[length - 1 - j];
		s[length - 1 - j] = temp;
	}
}
