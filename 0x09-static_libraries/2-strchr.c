#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locates a character in a strin
 *
 * @s: string of the word
 *
 * @c: the characte
 *
 * Return: a pointer of the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (i + s);
		}
		i++;
	}
	return ('\0');
}
