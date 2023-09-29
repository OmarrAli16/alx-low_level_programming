#include <stdio.h>
#include "main.h"

/**
 * factorial - retuns factorial 0of given number
 *
 * @n: integer of given number
 *
 * Return: the factorial value
 */

int factorial (int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
