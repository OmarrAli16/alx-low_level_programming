#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function for adding all its parameters
 *
 * @n: gruments number
 *
 * @...: the required int to be added
 *
 * Return: the addition of integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int addition;
	int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (i = n; i > 0; i--)
	{
		addition = addition + va_arg(arg, int);
	}
	va_end(arg);
	return (addition);
}
