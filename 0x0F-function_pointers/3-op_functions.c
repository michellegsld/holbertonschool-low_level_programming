#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - Subtracts one integer from another
 * @a: The first integer to be subtracted from
 * @b: The second integer that will be subtracted
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - Divides two integers
 * @a: The first integer to be divided
 * @b: The second integer to divide by
 *
 * Return: The result of a divided by b
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - Finds the remainder of a division
 * @a: The first integer to be divided
 * @b: The second integer to divide by
 *
 * Return: The reminder of a divided by b
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
