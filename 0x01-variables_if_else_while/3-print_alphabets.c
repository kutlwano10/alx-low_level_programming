#include <stdio.h>

/**
* main - lowercase and uppercase
*
* Description: using the main function
* this program prints "the lowercase and uppercase
* Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

