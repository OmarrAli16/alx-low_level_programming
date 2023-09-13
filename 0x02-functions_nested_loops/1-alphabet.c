#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 */
void print_alphabet(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
