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

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			putchar(n + '0');
			putchar(i + '0');
			if (!((n == 9) && (i == 9)))
			{
				putchar(',');
			}
			putchar(' ');
		}
	}

	return (0);
}
