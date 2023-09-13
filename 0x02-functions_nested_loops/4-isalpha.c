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
	if (c <= 122 && c <= 90 && c >= 65 && c >= 97)
		return (1);
	return (0);
}
