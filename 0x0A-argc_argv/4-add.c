#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int pos_check(char *s);

/**
 * main - adds positive numbers
 * @argc: Argument count, number passed to program
 * @argv: Argument vector, 1-dimentional array
 *
 * Return: Always 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc > 2)
	{
		for (; i < argc; i++)
		{
			if (pos_check(argv[i]) == 1)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d", sum);
	}

	printf("\n");

	return (0);
}

/**
 * pos_check - Checks a string for a positive number
 * @s: the string to check
 *
 * Return: Either 1 or 0, depending if true or not
 */
int pos_check(char *s)
{
	if (!isdigit(*s))
		return (0);

	return (1);
}
