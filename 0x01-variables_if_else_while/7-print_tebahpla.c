#include <stdio.h>

/**
* main - using the main function
*
* Description: using the putchar function
* this program prints "the lowercase alphabets in lowercase
* Return: 0
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

