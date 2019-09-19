#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'z';

	for (; l >= 'a'; l--)
		putchar(l);

	putchar('\n');

	return (0);
}
