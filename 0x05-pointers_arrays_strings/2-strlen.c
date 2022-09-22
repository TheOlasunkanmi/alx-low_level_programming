#include "main.h"

/**
 * _strlen - entry point
 *
 * Description: the progam returns the length of a string
 *
 * @s: the input parameter
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
		return (index);
}

