#include <stdio.h>
#include "main.h"

/**
* print_number - function that print all numbers from 0 - 9
*
* Return: 0
*/

void print_number(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}

