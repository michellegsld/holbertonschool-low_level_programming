#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the name of program
 * @argc: Argument count, number passed to program
 * @argv: Argument vector, 1-dimentional array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
