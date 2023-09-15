#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that draws straight line
 *
 * @n: input integer
 */

void print_line(int n)
{
	int length;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (length = 1; length <= n; length++)
			_putchar('_');
		_putchar('\n');
	}
}
