#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: a char that takes a string value
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
