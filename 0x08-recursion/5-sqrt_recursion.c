#include "holberton.h"

int _sqrt_math(int num, int n);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 *
 * Return: Always an int, either the square root or -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_math(0, n));
}

/**
 * _sqrt_math - Does the math to find the square root without changing n
 * @num: The number that will equal the square root
 * @n: The number that's being square rooted
 *
 * Return: Always num
*/
int _sqrt_math(int num, int n)
{
	if (num * num == n)
		return (num);
	else if (num < n)
		return (_sqrt_math(num + 1, n));
	else
		return (-1);
}
