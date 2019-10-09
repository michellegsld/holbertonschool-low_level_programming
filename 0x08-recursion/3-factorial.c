#include "holberton.h"

/**
 * factorial - Return the factorial of a given number
 * @n: The given number
 *
 * Return: Always an int, either the factorial or -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n *  factorial(n - 1));
}
