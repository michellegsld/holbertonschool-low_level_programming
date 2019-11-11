#include <stdio.h>

/**
 * main - Prints even Fibonacci numbers below 4 million
 *
 * Starts with 1 and 2, followed by a newline.
 * Return: Always 0.
 */
int main(void)
{
	long sum = 0, prev1 = 0, prev2 = 1, total = 0;

	while ((prev1 + prev2) < 4000000)
	{
		sum = prev1 + prev2;

		if (sum % 2 == 0)
			total += sum;

		prev1 = prev2;
		prev2 = sum;
	}

	printf("%ld\n", total);

	return (0);
}
