#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function for concatenating two strings
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

	for (length = 0; dest[length] != '\0'; length++)
		;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length++] = '\0';
	return (dest);
}
