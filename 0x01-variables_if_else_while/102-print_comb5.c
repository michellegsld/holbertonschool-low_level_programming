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
		for (i = 0; i <= 9; i++)
			for (j = n; j <= 9; j++)
			{
				if (n == 0)
					q = i;
				else
					q = i + 1;
				for (; q <= 9; q++)
				{
					putchar(n + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(q + '0');
					if (!((n == 9) && (i == 8) && (j == 9) && (q == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}


	putchar('\n');

	return (0);
}
