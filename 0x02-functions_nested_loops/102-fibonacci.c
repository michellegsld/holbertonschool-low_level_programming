#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Starts with 1 and 2, followed by a newline..
 * Return: Always 0.
 */
void main(void)
{
	int counter = 0;
	unsigned long int sum = 0;

	for (; counter < 50; counter++)
	{
		sum = sum + counter;
		if (sum > 0)
		{
			printf("%d", sum);
			if (counter != 49)
				printf(", ");
		}
	}
	return (0);
}
