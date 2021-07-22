#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j;
	char *str;
	const char check_form[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} j = 0;
		while (format[i + 1] && check_form[j])
		{
			if (format[i] == check_form[j])
			{
				printf(", ");
				break;
			} j++;
		} i++;
	}
	printf("\n");
	va_end(valist);
}
