#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num1;
	int num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num1 >= num2)
				continue;
			else
			{
				putchar(num1);
				putchar(num2);
				if ((num1 < 56) || (num2 < 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
