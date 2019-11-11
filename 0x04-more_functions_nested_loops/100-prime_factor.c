#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int i;
	long int j;

	for (i = 612852475143; i > 1; i--)
	{
		for (j = 2; j < 612852475143; j++)
		{
			if (i * j == 612852475143)
			{
				if (i % 2 != 0 && i % 5 != 0)
				{
					printf("%ld\n", i);
					i = 0;
					break;
				}
			}
		}
	}

	return (0);
}
