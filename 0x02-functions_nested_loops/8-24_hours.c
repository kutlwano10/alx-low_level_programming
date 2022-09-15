#include "main.h"

/**
* jack_bauer - func that print every min
* n from 00:00 to 23:59, min loop counts min, hour loop counts hours
* abd reset mins
* Return: 0
*/
void jack_bauer(void)
{
	int hour = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
		hours_remainder = hours % 10;
		_putchar(hours / 10 + '0');
		_putchar(hours_remainder + '0');
		_putchar(':');
		_putchar(minuts / 10 + '0');
		_putchar(mins_remainder + '0');
		minutes++;
		_putchar('\n');
	}
		hours++;
		minutes = 0;
	}
}

