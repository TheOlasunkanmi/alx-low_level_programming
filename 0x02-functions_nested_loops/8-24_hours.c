#include "main.h"
/**
 * jack_bauer - entry point
 *
 * Description: using the jack_bauer function, the program
 * prints every minute of the day from 00:00
 * to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minutes = 0;
	int hour_left;
	int minutes_left;

	while (hour <= 23)
	{
		while (minutes <= 59)
		{
			hour_left = hour % 10;
			_putchar(hour / 10 + '0');
			_putchar(hour_left + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_left + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}

