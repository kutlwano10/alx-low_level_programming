#include <stdlib.h>
#include <time.h>
#include <stdio.>

/**
* main - print whether variable n is negative or positive
*
* Description: using the main funtion
* this program is "whether the variable stored in n is positive or not
* Return: 0
*/
int main(void)
{
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	    printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

