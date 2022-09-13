#include <stdio.h>
/**
 * main - prints all possible combinations of
 * single-digit numbers separated by commas
 *
 * Description: using the main function, the
 * program prints possible combinations
 * of single digit numbers
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

