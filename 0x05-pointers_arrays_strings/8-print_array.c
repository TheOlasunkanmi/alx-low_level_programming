#include "main.h"
#include <stdio.h>

/**
 * print_array - functions prints n elements of an array
 * of integers.
 *
 * @a: pointer to an array
 * @n: number of array elements.
 *
 * Return: void;
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; 1++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
