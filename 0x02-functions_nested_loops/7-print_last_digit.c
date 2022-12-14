#include "main.h"

/**
 * print_last_digit -  entry point
 *
 * @n: the number to be printed
 * Description: using the print_last_digit funtion, the
 * program prints the last digit of a number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}
	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}

