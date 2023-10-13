#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers
 *
 * @separator: the separator for the string
 *
 * @n: arguments number
 *
 * @...: the required integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	for (i = n; i > 0; i--)
	{
		printf("%d%s", va_arg(arg, int), 
				i ? (separator ? separator : "") : "\n");
	}
	va_end(arg);
}
