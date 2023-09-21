#include <stdio.h>
#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s2++;
		s1++;
	}
	return (result);
}
