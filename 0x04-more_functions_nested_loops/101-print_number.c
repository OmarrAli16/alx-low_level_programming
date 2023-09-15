#include <stdio.h>
#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: input integer
 */

void print_number(int n)
{
	unsigned int integer = n;

	if ((integer / 10) > 0)
		print_number(integer / 10);
	_putchar((integer % 10) + '0');

	if (n < 0)
	{
		_putchar('-');
		integer = -integer;
	}
}
