#include "main.h"

/**
 * _isupper - entry point
 * @c: character to be tested
 * Return: 1 whether it is correct, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
