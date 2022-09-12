#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign a random number to the variable n
*
* Description: using the main function
* this program prints "the last digit of the number in the variable n
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % l0);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n % l0);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % l0);
	}
	return (0);
}

