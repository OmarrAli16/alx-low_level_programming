#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: inputs the string
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char change;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		change = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = change;
	}
}
