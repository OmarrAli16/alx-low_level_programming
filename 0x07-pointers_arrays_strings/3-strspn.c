#include <stdio.h>
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix
 *
 * @s: the main string
 *
 * @accept: the string that will be compared to s
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		for (; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				i = i + 1;
		}
	}
	return (i);
}
