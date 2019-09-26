#include "holberton.h"

/**
 * print_times_table - Gives any times table from 0 to 15.
 * @n: Is the parameter determining how big the table is.
 */
void print_times_table(int n)
{
	if (!(n >= 0 && n <= 15))
		return;
	int i, j, x;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = j * i;
			if (j == 0)
				_putchar(x + '0');
			else
				_putchar(',');
			if (j != 0 && x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x >= 10 && x < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (x >= 100)
			{
				_putchar(' ');
				_putchar(x / 100 + '0');
				if (x / 10 < 10)
					_putchar(x / 10 + '0');
				else
					_putchar((x / 10) % 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
