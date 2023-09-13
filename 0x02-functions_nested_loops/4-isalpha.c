#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function to check the alphabetic character
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is an alphabet
 */

int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
