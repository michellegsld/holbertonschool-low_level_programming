#include "holberton.h"

/**
 * times_table - Gives the times table up to 9x9.
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = j * i;

			if (x < 10)
			{
				_putchar(x + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
