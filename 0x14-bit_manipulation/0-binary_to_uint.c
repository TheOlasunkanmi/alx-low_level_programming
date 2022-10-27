#include "main.h"
/**
 * binary_to_uint - Function converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[i] - '0');
	}

	return (decimal_val);
}
