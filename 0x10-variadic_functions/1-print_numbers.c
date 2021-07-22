#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed.
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	if (n != 0)
		printf("%d", va_arg(valist, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(valist, int));
	}
	printf("\n");
	va_end(valist);
}
