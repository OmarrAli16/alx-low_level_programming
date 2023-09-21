#include <stdio.h>
#include "main.h"

/**
 * string_toupper - a function that changes lowercase to uppercase
 *
 * @ltou: input string
 *
 * Return: an uppercase string
 */

char *string_toupper(char *ltou)
{
	int index;

	for (index = 0; ltou[index] != '\0'; index++)
	{
		if (ltou[index] >= 'a' && ltou[index] <= 'z')
		{
			ltou[index] = ltou[index] - 32;
		}
	}
	return (ltou);
}
