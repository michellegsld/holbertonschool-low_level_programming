#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;
	int j;

	for (n = 0; n < 10; n++)
	{
		for (i = n + 1; i <= 9; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				putchar(n + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (!((n == 7) && (i == 8) && (j == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
