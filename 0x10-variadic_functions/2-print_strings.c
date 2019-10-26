#include "variadic_functions.h"

/**
 * print_strings - Will print strings followed by a newline
 * @separator: The string to be printed in between the strings
 * @n: The total number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *arg;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(list, char*);

		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");

		if ((i < n - 1) && (separator))
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
