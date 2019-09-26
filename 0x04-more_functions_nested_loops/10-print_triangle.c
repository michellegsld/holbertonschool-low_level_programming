#include "holberton.h"

/**
 * print_triangle - Prints a right triangle followed by a new line.
 * @n: Determines how big the triangle is.
 */
void print_triangle(int n)
{
	int loop, spaces, amount;

	if (n > 0)
		for (loop = 0; loop < n; loop++)
		{
			for (spaces = n; spaces > loop; spaces--)
				_putchar(' ');
			for (amount = 0; amount <= loop; amount++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
