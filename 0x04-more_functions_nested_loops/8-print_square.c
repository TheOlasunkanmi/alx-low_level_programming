#include <stdio.h>
#include "main.h"

/**
 * print_square - entry point
 *
 * @size: parameter
 * Description: using the print_square funtion, the
 * programme prints a square
 * Return: nothing
 */

void print_square(int size)
{
	int num1, num2;

	if (size > 0)
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 < (size - 1); num2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

