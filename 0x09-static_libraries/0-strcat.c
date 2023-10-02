#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function for concatenating two strings
 *
 * @dest: input type char
 *
 * @src: input type char
 *
 * Return: the final result
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int i;

	for (length = 0; dest[length] != '\0'; length++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length++] = '\0';
	return (dest);
}
