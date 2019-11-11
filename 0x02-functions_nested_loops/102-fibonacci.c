#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Starts with 1 and 2, followed by a newline..
 * Return: Always 0.
 */
int main(void)
{
	int counter = 0;
	long sum = 1, prev = 0;

	for (; counter < 50; counter++)
	{
		prev = sum;

		if (counter > 0)
			sum = prev + sum;

		printf("%ld", sum);
		
		if (counter < 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
