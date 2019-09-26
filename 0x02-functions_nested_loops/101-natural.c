#include <stdio.h>

/**
 * main - Prints sum of all multiples of 3 or 5 below 1024.
 *
 * Adds all multiples of 3 or 5 but not if it's both.
 * Return: Always 0.
 */
void main(void)
{
	int i = 0;
	unsigned long int sum = 0;

	for (; i < 1024; i++)
	{
		if (i % 15 != 0)
		{
			if (i % 3 == 0)
				sum = sum + i;
			if (i % 5 == 0)
				sum = sum + i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
