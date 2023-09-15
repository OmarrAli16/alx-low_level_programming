#include <stdio.h>
#include "main.h"

/**
 * print_triangle -a function to print a triangle
 * 
 * @size: integer for indicating the size
 */

void print_triangle(int size)
{
	int r, h;

	if (size > 0)
		for (r = size; r > 0; r--)
		{
			for (h = 1; h <= size; h++)
				if (h >= r)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
