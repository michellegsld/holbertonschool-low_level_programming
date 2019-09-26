#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Determines how long the line will be, if over 0.
 */
void print_line(int n)
{
	int loop;

	if (n > 0)
		for (loop = 0; loop < n; loop++)
			_putchar('_');
	_putchar('\n');
}
