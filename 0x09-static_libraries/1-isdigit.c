#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 *
 * @c: input integer
 *
 * Return: 1 if it is a digit
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
