#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to do the operation
 * @s: The operator
 *
 * Return: The function pointer corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6 && (s[1] == '\0'))
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
