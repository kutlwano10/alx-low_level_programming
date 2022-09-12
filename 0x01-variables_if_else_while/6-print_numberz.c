#include <stdio.h>

/**
* main - single numbers
*
* Description: using the main function
* this program prints "all single numbers of base 10 from 0
* Return: 0
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

