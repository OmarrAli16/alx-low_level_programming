#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 *
 * @n: input integer for count '\'
 */

void print_diagonal(int n)
{
	int diag;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (space = 1; space <= diag; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
