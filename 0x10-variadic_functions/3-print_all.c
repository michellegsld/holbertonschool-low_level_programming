#include "variadic_functions.h"

/**
 * print_all - Will print anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *arg;
	unsigned int i = 0, check = 0;
	va_list list;

	va_start(list, format);
	while ((format) && (format[i] != '\0'))
	{
		check = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				arg = va_arg(list, char *);
				if (arg)
				{
					printf("%s", arg);
					break;
				}
				printf("(nil)");
				break;
			default:
				check = 0;
				break;
		}
		if (check == 1 && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
