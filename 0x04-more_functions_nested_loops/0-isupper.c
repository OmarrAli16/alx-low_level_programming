#include <stdio.h>
#include "main.h"

/**
 * _isupper - is a function that checks for uppercase character
 *
 * @c: input for chara
 *
 * Return: 1 if it is uppecase
 */

int _isupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
