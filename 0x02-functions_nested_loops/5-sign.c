#include "main.h"
/**
 * print_sign - entry point
 *
 * @n: the character whose sign is to be printed
 * Description: using the print_sign function, the program
 * prints the sign of a number
 * Return: 1 or 0 or '-'1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('=');
		return (0);
	}
}
