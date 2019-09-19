#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	for (; l <= 'z'; l++;)
		putchar(l);

	putchar("\n");

	return (0);
}
