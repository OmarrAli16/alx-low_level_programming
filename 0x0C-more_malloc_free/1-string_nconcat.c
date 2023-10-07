#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a finction thar concatenated strings
 *
 * @s1: char for first string
 *
 * @s2: char for second string
 *
 * @n: integer for number of bytes in s2
 *
 * Return: a concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int calc_length1;
	unsigned int calc_length2;
	unsigned int i;
	unsigned int j;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (calc_length1 = 0; s1[calc_length1] != '\0'; calc_length1++)
	{
		;
	}
	for (calc_length2 = 0; s2[calc_length2] != '\0'; calc_length2++)
	{
		;
	}
	result = malloc(calc_length1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
