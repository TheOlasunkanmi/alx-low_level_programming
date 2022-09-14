#include "main.h"
/**
 * print_alphabet - prints abc
 *
 * Description: using the print_alphabet function, the
 * program prints the alphabet
 * in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

