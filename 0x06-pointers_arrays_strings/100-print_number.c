#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	int i = 0;
	int len = 1000000000;

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

	for (; len != 1;)
	{
		if (n >= len)
			_putchar((n / len) % 10 + '0');
		len = len / 10;
	}

	if (i == 1)
		_putchar(((n % 10) + 1) + '0');
	else
		_putchar(n % 10 + '0');
}
