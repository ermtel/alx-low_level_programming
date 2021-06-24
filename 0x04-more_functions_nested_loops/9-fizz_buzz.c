#include <stdio.h>

/**
 * main - print 0-100 with fizz for multiples of 3 and buzz for multiples of 5.
 *
 * Return: Always 0.
 */

int main(void)
{

	int count;

	printf("1");
	for (count = 2; count <= 100; count++)
	{
		if ((count % 3 == 0) && (count % 5 == 0))
			printf(" FizzBuzz");
		else if (count % 3 == 0)
			printf(" Fizz");
		else if (count % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", count);
	}
	printf("\n");
	return (0);
}
