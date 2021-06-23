#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers.
 *
 * Return: Always 0 (success).
 */

int main(void)
{

	int i;
	long int fib, num0, num1, sum;

	sum = 0;
	num0 = 1;
	num1 = 1;
	for (i = 0; i < 48; i++)
	{
		fib = num0 + num1;
		if ((fib % 2 == 0) && (fib <= 4000000))
			sum += fib;
		num0 = num1;
		num1 = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
