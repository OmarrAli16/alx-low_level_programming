#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two int
 *
 * @a: first integer
 *
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int exchange = *a;

	*a = *b;
	*b = exchange;
}
