#include "holberton.h"

/**
 * jack_bauer - Prints every minute of military time.
 */
void jack_bauer(void)
{
	int h1, h2;
	int m1, m2;

	for (h1 = 0; h1 < 3; h1++)
		for (h2 = 0; h2 < 10; h2++)
			for (m1 = 0; m1 < 6; m1++)
				for (m2 = 0; m2 < 10; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
					if ((h1 == 2) && (h2 == 3) && (m1 == 5) && (m2 == 9))
						break;
				}
}
