#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int i = 612852475143;
	long int j = 2;

	while (i > j)
	{
		if (i % j == 0)
		{
			i = i / j;
			j = 2;
		}
		else
			j = j + 1;
	}

	printf("%ld\n", j);

	return (0);
}
