#include "holberton.h"

/**
 * is_prime_number - Determines if a number is a prime number
 * @n: The number to be determined
 *
 * Return: Either 1 or 0.
 */
int is_prime_number(int n)
{
	if ((n > 1) && (n % 2 != 0 && n % 5 != 0))
		return (1);
	return (0);
}
