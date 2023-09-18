#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 *
 * @s: input of a string
 */

void print_rev(char *s)
{
	int letters = 0;

	while (s[letters])
	{
		letters++;
	}
	while (letters--)
	{
		_putchar(s[letters]);
	}
_putchar('\n');
}
