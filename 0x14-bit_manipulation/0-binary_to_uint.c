#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: the binary value to be converted.
 * Return: the converted number or 0 upon failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1, uint = 0;
	int j, len;

	if (b == 0)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (j = len - 1; j >= 0; j--)
	{
		if ((b[j] == 48) || (b[j] == 49))
		{
			uint = uint + ((b[j] - 48) * i);
			i = i * 2;
		}
		else
			return (0);
	}
	return (uint);
}
