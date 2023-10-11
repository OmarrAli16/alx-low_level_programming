#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function for excuting parameters on array elem
 *
 * @array: a pointer for the array elements
 *
 * @size: the size of the array
 *
 * @action: pointer for the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last;

	last = array + size - 1;
	if (action && array && size)
	{
		while (array <= last)
		{
			action(*array++);
		}
	}
}
