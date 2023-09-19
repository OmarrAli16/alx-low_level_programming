#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: input char1
 * @src: input char2
 *
 * Return: respoxible for the dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
