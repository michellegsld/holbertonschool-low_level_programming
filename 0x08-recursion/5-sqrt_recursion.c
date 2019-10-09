#include "holberton.h"

/**
 * math - Does the math to find the square root without changing n
 * @num: The number that will equal the square root
 * @n: The number that's being square rooted
 *
 * Return: Always num
 */
int math(int num, int n)
{
	if (num * num > n)
		return (-1);
	else if ((num * num) != n)
		return (math(num++, n));
	else
		return (num);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 *
 * Return: Always an int, either the square root or -1.
 */
int _sqrt_recursion(int n)
{
	return (math(1, n));
}
