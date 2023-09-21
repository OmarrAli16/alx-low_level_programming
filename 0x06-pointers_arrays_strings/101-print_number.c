#include <stdio.h>
#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: input integer
 */

void print_number(int n)
{
	unsigned int num = n;

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	_putchar((num % 10) + '0');
}
