#include "main.h"

/**
* _strncat - is the function
* @dest: first param
* @src: second param
* @n: third param
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_den = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
