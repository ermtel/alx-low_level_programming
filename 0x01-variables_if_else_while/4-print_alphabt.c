#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if ((alpha == 101) || (alpha == 113))
			continue;
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
