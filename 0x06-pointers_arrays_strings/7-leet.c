#include <stdio.h>
#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @enc: the input string
 *
 * Return: encoded string
 */

char *leet(char *enc)
{
	char let[] = {'A', 'E', 'O', 'T', 'L'};
	char val[] = {4, 3, 0, 7, 1};
	char *result = enc;
	unsigned int i;

	i = 0;
	while (*enc)
	{
		for (; i < sizeof(let) / sizeof(char); i++)
		{
			if (*enc == let[i] || *enc == let[i] + 32)
			{
				*enc = val[i] + 48;
			}
		}
		enc++;
	}
	return (result);
}
