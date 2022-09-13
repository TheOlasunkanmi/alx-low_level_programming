#include <stdio.h>
/**
 * main - prints numbers of base 16 in lowercase
 *
 * Description: using the main function, this programme prints the numbers
 * of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c < '10'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

