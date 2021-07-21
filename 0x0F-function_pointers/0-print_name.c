#include "function_pointers.h"

/**
 * print_name - prints a nema.
 * @name: the name to be printed.
 * @f: pointer to a function that prints the name.
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(1);
	f(name);
}
