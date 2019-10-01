#include "holberton.h"

/**
 * puts2 - Prints every other character of a string, starts with first
 * @str: The string to be used
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	
	_putchar(str[i]);
	_putchar('\n');
}
