#include <stdio.h>
#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: input type char
 *
 * @src: input type char
 *
 * @n: input type integer
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
