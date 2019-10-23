#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: The string, that is a name, to be printed
 * @f: The pointer to the function that we will call to send the name to
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
