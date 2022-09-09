#include <stdio.h>

/**
* main - print a string in to printf function
* 
* Description: we use the main function
* this program prints " the size of various types on the computer it is compiled and run on
* return: 0
*/
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of int: %ld byte(s)\n", sizeof(i));
	printf("Size of long int: %ld byte(s)\n", sizeof(l));
	printf("Size of long long int: %ld byte(s)\n", sizeof(ll));
	printf("Size of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
	
