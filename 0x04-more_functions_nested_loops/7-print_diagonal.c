#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Determines how long the line will be if over 0.
 */
void print_diagonal(int n)
{
	int loop, spaces;

	if (n > 0)
		for (loop = 0; loop < n; loop++)
		{
			for (spaces = 0; spaces < loop; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
