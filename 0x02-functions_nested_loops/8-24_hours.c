#include "holberton.h"

/**
 * jack_bauer - prints every minute of 24 hours from 00:00-23:59.
 *
 */

void jack_bauer(void)
{
	int min1, min2, hr1, hr2;

	for (hr2 = 0; hr2 < 3; hr2++)
	{
		for (hr1 = 0; hr1 <= 9; hr1++)
		{
			for (min2 = 0; min2 < 6; min2++)
			{
				for (min1 = 0; min1 <= 9; min1++)
				{
					if ((hr2 == 2) && (hr1 > 3))
						continue;
					else
					{
						_putchar(48 + hr2);
						_putchar(48 + hr1);
						_putchar(58);
						_putchar(48 + min2);
						_putchar(48 + min1);
						_putchar('\n');
					}
				}
			}
		}
	}
}
