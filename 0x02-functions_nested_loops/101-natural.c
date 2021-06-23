#include <stdio.h>

/**
 * main - sum of multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int i;
	long int sum = 0;

	for (i = 1; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	printf("%ld\n", sum);
	return (0);
}
