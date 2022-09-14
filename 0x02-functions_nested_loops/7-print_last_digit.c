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
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
		_putchar(last + '0');
	}
	return (last);
}

