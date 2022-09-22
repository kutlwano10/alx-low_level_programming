#include "main.h"
#include <stdio.h>

/**
* _strncat - is the function
* @dest: first param
* @src: second param
* @n: third param
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	_strncat(*dest, *src, n);
	return (dest);
}
