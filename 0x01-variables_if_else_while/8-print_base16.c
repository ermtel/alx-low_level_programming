#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int hexa;

	for (hexa = 48; hexa <= 102; hexa++)
	{
		if ((hexa > 57) && (hexa < 97))
			continue;
		putchar(hexa);
	}
	putchar(10);
	return (0);
}
