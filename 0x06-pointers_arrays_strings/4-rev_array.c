#include <stdio.h>
#include "main.h"

/**
 * reverse_array - a function that reverse an array
 *
 * @a: input of array
 *
 * @n: input of the size of the array
 */

void reverse_array(int *a, int n)
{
	int first;
	int last;
	int rotation;

	first = 0;
	last = n - 1;
	for (; first < last; first++, last--)
	{
		rotation = a[first];
		a[first] = a[last];
		a[last] = rotation;
	}
}
