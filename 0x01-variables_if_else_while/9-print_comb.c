#include <stdio.h>

/**
* main - entry point
*
* Description: using the main function 
* this program prints "possible combinations of single numbers
* Return: 0
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if(c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
