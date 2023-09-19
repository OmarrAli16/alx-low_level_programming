#include <stdio.h>
#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 *
 * @s: input char
 *
 * Return: the final result
 */

int _atoi(char *s)
{
	int sign;
	unsigned int out;
	int final;

	out = 0;
	sign = 1;
	do {
		if (*s >= '0' && *s <= '9')
			out = (out * 10) + (*s - '0');
		else if (*s == '-')
			sign = sign * -1;
		else if (out > 0)
			break;
	} while (*s++);
	final = out * sign;
	return (final);
}
