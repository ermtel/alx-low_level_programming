#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: input string.
 *
 * Return: encoded string.
 */

char *leet(char *s)
{

	int i, j;
	int sletters[] = {97, 101, 111, 116, 108};
	int cletters[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};
	char *buff = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == sletters[j]) || (s[i] == cletters[j]))
				s[i] = nums[j];
		}
	}
	return (buff);
}
