#include "main.h"

/**
* _islower - function to check lowercases
* @c: int that we will use for argumrnt func
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
