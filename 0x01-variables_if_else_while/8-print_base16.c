#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char l = 'a';

	for (; n < 10; n++)
		putchar(n + '0');
	for (; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
