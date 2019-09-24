#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of the parameter.
 * @n: We need the last digit of the absolute value of n.
 *
 * Return: Always n.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-n) % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}

	return (n);
}
