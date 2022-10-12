#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Determines which function should be used,
 * based to on the operator recieved.
 * @s: The operator that was passed
 *
 * Return: A pointer to the corresponding function
 * Return NULL if s does not match any of the available operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].op) != *s && ops[i].op != NULL)
	{
		i++;
	}

	return (ops[i].f);
}
