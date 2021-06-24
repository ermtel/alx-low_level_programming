#include <stdio.h>

/**
 * main - print the largest prime factor of 612852475143.
 *
 * Return: 0 (success).
 */

int main(void)
{

	long int i, k;

	k = 612852475143;
	for (i = 2; i <= k; i++)
	{
		if (k % i == 0)
		{
			k = k / i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
