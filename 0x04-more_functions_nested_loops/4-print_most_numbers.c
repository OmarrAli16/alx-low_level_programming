#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function that prints numbers
 *
 * Return: always 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 4 || i == 2)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
