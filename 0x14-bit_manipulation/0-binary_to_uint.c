#include "holberton.h"

unsigned int _pow_recursion(unsigned int x, unsigned int y);

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: Either the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int binary = 0, decimal = 0, remainder;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		binary = (binary * 10) + (b[i] - '0');
	}

	for (i = 0; binary != 0; i++)
	{
		remainder = binary % 10;
		binary = binary / 10;
		decimal += remainder * _pow_recursion(2, i);
	}

	return (decimal);
}

/**
 * _pow_recursion - Returns the value of x to the y power
 * @x: Always 2
 * @y: The power
 *
 * Return: Always an unsigned int, the output of x to the y.
 */
unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
