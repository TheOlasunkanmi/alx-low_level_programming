#include <stdio.h>
#includ "main.h"

/**
 * print_line - prints a straight line
 * @n: argument
 * Return: nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}

