#include "function_pointers.h"

/**
 * int_index - searches for an intger.
 *
 * @array: array of integers.
 * @size: number of elements in array.
 * @cmp: pointer to function used to compare values.
 *
 * Return: index of first element.
 * returns -1 if no element is found or size <= 0.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i,

	if (array && cmp)
	{
		if(size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
