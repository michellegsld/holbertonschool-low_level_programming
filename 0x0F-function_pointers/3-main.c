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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *op = argv[2];
	int (*func)(int, int);
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = (get_op_func(op));
	answer = (func(num1, num2));

	printf("%d\n", answer);
	return (0);
}
