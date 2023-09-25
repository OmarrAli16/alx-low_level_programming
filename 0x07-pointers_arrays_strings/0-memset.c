#include <stdio.h>
#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 *
 * @s: a pointer
 *
 * @b: the text
 *
 * @n: number of bytes
 *
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		s[i] = b;
	}
	return (s);
}
