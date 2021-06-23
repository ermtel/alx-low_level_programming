#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints from the given number upto 98.
 *
 * @n: the number to start printing.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
