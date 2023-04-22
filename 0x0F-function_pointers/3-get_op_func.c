#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct funtion to perform
 *               operation asked by user
 * @s: operation to perform
 *
 * Return: pointer to the correct function
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
	int x = 0;

	while (ops[x].op != NULL)
	{
		if (strcmp(s, ops[x].op) == 0)
			break;
		x++;
	}
	return (ops[x].f);
}
