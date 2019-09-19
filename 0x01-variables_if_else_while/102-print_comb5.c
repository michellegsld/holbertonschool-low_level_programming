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
	int q;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (q = 0; q <= 9; q++)
				{
					putchar(n + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(q + '0');
					if (!((j == 9) && (q == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
