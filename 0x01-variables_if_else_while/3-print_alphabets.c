#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int alpha;
	int ALPHA;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 65; ALPHA <= 90; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar(10);
	return (0);
}
