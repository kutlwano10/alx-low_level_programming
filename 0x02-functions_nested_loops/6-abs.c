#include "main.h"
#include <stdio.h>

/**
* _abs - compute absolute value of integer
* @c: is the int funct to be used
* Return: 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

