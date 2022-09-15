#include <stdio>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from input to 98,
 * in order seperated by a comma and followed by
 * a space.
 *
 * @c: the number to start counting at
 *
 */
void print_to_98(int c)
{
	if (c >= 98)
	{
		while (c > 98)
			printf("%d, ", c--);
		printf("%d\n", c);
	}
	else
	{
		while (c < 98)
			printf("%d, ", c++);
		printf("%d\n", c);
	}
}

