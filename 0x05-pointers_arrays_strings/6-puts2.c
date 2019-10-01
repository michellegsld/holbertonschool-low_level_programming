#include "holberton.h"

/**
 * puts2 - Prints every other character of a string, starts with first
 * @str: The string to be used
 */
void puts2(char *str)
{
	int i = 0, len = 0;
	
	while (str[len] != '\0')
		len++;
	
	len++;

	while (str[i] != str[len])
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
