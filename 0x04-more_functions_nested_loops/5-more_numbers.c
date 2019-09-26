#include "holberton.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int loop, num;

	for (loop = 0; loop < 10; loop++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
