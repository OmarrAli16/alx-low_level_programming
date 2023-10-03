#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointed to a new memory
 *
 * @str: inputed string
 *
 * Return: a pointer to dublicate string
 */

char *_strdup(char *str)
{
	int cpy;
	int req;
	char *result;

	if (str == 0)
	{
		return (NULL);
	}
	for (req = 0; str[req] != '\0'; req++)
	{
		;
	}
	result = malloc(req * sizeof(*str) + 1);
	if (result == 0)
	{
		return (NULL);
	}
	else
	{
		for (cpy = 0; cpy < req; cpy++)
				{
				result[cpy] = str[cpy];
				}
	}
	return (result);
}
