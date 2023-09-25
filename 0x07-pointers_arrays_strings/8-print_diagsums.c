#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix
 *
 * @a: it is the array represented in 2d
 *
 * @size: represents the size of the 2d array
 */

void print_diagsums(int *a, int size)
{
	int dig1;
	int dig2;
	int i;

	dig1 = 0;
	dig2 = 0;
	i = 0;
	for (i = 0; i < size; i++)
	{
		dig1 = dig1 + a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		dig2 = dig2 + a[i * size + (size - 1 - i)];
	}
	printf("%d\n", dig1);
	printf("%d\n", dig2);
}
