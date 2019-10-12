#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints all arguements it recieves
 * @argc: Argument count, number passed to program
 * @argv: Argument vector, 1-dimentional array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
