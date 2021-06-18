#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int alpha;

	for (alpha = 48; alpha <= 57; ++alpha)
	{
		putchar(alpha);
		if (alpha < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
