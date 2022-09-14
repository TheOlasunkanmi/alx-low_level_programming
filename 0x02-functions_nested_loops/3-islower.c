#include "main.h"
/**
 * _islower - entry point
 *
 * Description: using the _islower function the program checks for
 * lowercase letter
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

