#include "holberton.h"

/**
 * *argstostr - Concatenates all arguments of program
 * @ac: how many arguments
 * @av: Array containing the arguments
 *
 * Return: Either pointer to string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(ac + 1 * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		str[i] = av[i] + '\n';
	}

	str[i] = '\0';

	return (str);
}
