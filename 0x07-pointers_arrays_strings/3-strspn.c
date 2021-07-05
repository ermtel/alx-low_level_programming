#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the initial string.
 * @accept: the substring.
 *
 * Return: the number of bytes in @s which consists of @accept.
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i, j, num;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, num = 1; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				num = 0;
				break;
			}
		if (num == 1)
			break;
	}
	return (i);
}
