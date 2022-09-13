#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by , followed by a space
 * Return: 0
 */
int main(void)
{
	int num1;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			num1 = 0;
			while (num1 < 10)
			{
				if (num1 != d && d != e && e < d && d < num1)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + num1);

					if (num1 + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				num1++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
