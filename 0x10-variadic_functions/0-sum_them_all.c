#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parrameters
 * @n: number of argumednts to be summedd
 *
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...);
{
	unsigned int sum = 0, 1;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
