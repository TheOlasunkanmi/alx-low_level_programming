#include "3-calc.h"

/**
 * get_op_func - function selects the correct funtion to perform
 *
 * @s: operator used
 *
 * Return: correct function result or NULL if operator is wrong
 */
int (*get_op_func(char *))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"_", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
