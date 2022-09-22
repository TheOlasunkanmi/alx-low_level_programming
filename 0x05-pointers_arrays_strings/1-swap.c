#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: the first parameter
 * @b: th second parameter
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
