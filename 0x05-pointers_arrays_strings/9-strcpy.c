#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte, to the buffer pointed
 * to by dest.
 *
 * @src: copy
 * @dest: destination
 *
 * Return: returns src
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

