#include <stdio.h>
#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	int i;
	int j;
	int doub;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			doub = j;
			if (j > 9)
			{
				_putchar(1 + '0');
				doub = j % 10;
			}
			_putchar(doub + '0');
		}
		_putchar('\n');
	}
}
