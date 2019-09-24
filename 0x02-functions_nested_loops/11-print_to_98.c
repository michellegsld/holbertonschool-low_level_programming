#include "holberton.h"

/**
 * print_to_98 - Prints all natural numbers from the parameter to 98.
 */
void print_to_98(int n)
{
	int i = 0;

	while (n > 98)
	{
		if (n / 100 != 0)
			_putchar(n / 100 + '0');
		if (n >= 100)
		{
			i = 1;
			n = n - 100;
		}
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		
		_putchar(',');
		_putchar(' ');

		if (i == 1)
		{
			i = 0;
			n = n + 100;
		}
		n = n - 1;
	}

	while (n < 98)
	{
		if (n < 0)
		{
			i = 1;
			n = -n;
		}
		
		if (i == 1)
			_putchar('-');
		if (n / 100 != 0)
			_putchar(n / 100 + '0');
		if (n / 10 != 0)
			_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		
		_putchar(',');
		_putchar(' ');
		
		if (i == 1)
		{
			i = 0;
			n = -n;
		}
		n = n + 1;
	}
	
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	_putchar('\n');
	return;
}
