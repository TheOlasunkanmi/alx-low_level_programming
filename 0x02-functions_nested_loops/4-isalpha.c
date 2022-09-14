#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: the character to be printed
 * Description: using the _isalpha function, the program
 * checks if c is a lettr, lowercase or uppercase
 * Return: 1 if success, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

