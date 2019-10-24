#include "3-calc.h"

/**
 * main - Performs simple operations
 * @argc: Argument count
 * @argv: Array of elements
 *
 * Return: Always an integer
 */
int main(int argc, char *argv[])
{
	int (*func)(int num1, int num2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
