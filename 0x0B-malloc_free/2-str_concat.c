#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: the last string or null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int length_1;
	int length_2;
	int both_length;
	char *result;
	int con = 0;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	length_1 = strlen(s1);
	length_2 = strlen(s2);
	both_length = length_1 + length_2 + 1;
	result = malloc(both_length);

	if (result == 0)
	{
		return (NULL);
	}
	while (con < length_1 + length_2)
	{
		if (con < length_1)
		{
			result[con] = s1[con];
		}
		else
		{
			result[con] = s2[con - length_1];
		}
		con++;
	}
	result[con] = '\0';
	return (result);
}

