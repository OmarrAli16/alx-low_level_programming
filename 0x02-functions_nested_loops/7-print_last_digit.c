#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @digit: digit to insert the number
 *
 * Return: The last digit
 */
int print_last_digit(int digit)
{
	int last;

	if (digit > 0)
		last = digit % 10;
	else
		last = -1 * (digit % 10);

	_putchar(last + '0');
	return (last);
}
