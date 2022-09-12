#include <stdio.h>

/**
* main - is the entry point
*
* Description: using the main function
* this program prints "single digits numbers of base 10
* Return: o
*/
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

