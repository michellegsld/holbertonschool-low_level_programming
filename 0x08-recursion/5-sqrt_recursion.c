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
	if (n > 0)
		return (_sqrt_math(1, n));
	return (-1);
}

/**
 * _srt_math - Does the math to find the square root without changing n
 * @num: The number that will equal the square root
 * @n: The number that's being square rooted
 *
 * Return: Always num
*/
int _sqrt_math(int num, int n)
{
	if (num * num != n)
		return (_sqrt_math(num++, n));
	if (num * num == n)
		return (num);
	return (-1);
}
