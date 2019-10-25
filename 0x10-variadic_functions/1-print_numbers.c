#include "variadic_functions.h"

/**
 * print_numbers - Will print numbers followed by a newline
 * @separator: The string to be printed in between numbers
 * @n: The total number of variadic arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}

	va_end(list);
}
