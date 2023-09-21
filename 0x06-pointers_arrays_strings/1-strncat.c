#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function for concatenating two strings
 *
 * @dest: input type char
 *
 * @src: input type char
 *
 * @n: max number of bytes
 *
 * Return: the final result
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	length = 0;
	while (dest[length])
		length++;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
