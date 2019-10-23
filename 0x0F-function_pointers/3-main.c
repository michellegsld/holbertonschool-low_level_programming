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
	char *optr = argv[2];
	char op = argv[2][0];
	int (*func)(int num1, int num2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (op != '+' && op != '-' && op != '*' && op != '/'
			&& op != '%' && argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	func = get_op_func(optr);

	printf("%d\n", func(num1, num2));
	return (0);
}
