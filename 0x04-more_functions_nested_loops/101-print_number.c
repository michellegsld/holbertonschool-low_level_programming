#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			i = 1;
			n = n + 1;
		}
		n = -n;
	}

	if (n >= 1000000000)
		_putchar((n / 1000000000) % 10 + '0');
	if (n >= 100000000)
		_putchar((n / 100000000) % 10 + '0');
	if (n >= 10000000)
		_putchar((n / 10000000) % 10 + '0');
	if (n >= 1000000)
		_putchar((n / 1000000) % 10 + '0');
	if (n >= 100000)
		_putchar((n / 100000) % 10 + '0');
	if (n >= 10000)
		_putchar((n / 10000) % 10 + '0');
	if (n >= 1000)
		_putchar((n / 1000) % 10 + '0');
	if (n >= 100)
		_putchar((n / 100) % 10 + '0');
	if (n >= 10)
		_putchar((n / 10) % 10 + '0');
	if (i == 1)
		_putchar(((n % 10) + 1) + '0');
	else
		_putchar(n % 10 + '0');
}
