#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a newline.
 *
 * Return: 0.
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		_putchar(a);

	_putchar('\n');
}
