#include <stdio.h>
#include "main.h"

/**
 * rot13 - a function that encodes string
 *
 * @pass: input string
 *
 * Return: encoded result
 */

char *rot13(char *pass)
{
	char in13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (*pass)
	{
		for (; i < 53; i++)
		{
			if (*pass == in13[i])
			{
				*pass = out13[i];
				break;
			}
		}
	pass++;
	}
return (pass);
}
