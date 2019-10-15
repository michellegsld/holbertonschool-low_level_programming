#include <stdio.h>
ii
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
*/
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\0";
	int i;

	for (i = 0; q[i] != '\0'; i++)
		putchar(q[i]);

	putchar('\n');
	return (1);
}
