#include "holberton.h"

/**
 * print_numbers - Prints the numbers 0 to 9, followed by a newline.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num + '0');
	
	_putchar('\n');
}
