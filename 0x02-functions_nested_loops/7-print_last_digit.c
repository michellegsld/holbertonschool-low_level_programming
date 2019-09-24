#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of the parameter.
 * @n: A number that will become positive. l is given it's last digit.
 *
 * Return: Always l.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	int l = n % 10;

	_putchar(l + '0');

	return (l);
}
