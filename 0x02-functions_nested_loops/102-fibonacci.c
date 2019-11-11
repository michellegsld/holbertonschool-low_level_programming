#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Starts with 1 and 2, followed by a newline.
 * Return: Always 0.
 */
int main(void)
{
	int counter = 0;
	long sum = 0, prev1 = 0, prev2 = 1;

	for (; counter < 50; counter++)
	{
		sum = prev1 + prev2;

		printf("%ld", sum);

		if (counter < 49)
			printf(", ");
		else
			printf("\n");

		prev1 = prev2;
		prev2 = sum;
	}
	return (0);
}
