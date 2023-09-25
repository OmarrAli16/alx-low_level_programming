#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: number of rows
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
