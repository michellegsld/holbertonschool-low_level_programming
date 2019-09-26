#include "holberton.h"

/**
 * print_most_numbers - Similar to print_numbers, except doesnt print 2 or 4.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		if (num != 2 && num != 4)
			_putchar(num + '0');

	_putchar('\n');
}
