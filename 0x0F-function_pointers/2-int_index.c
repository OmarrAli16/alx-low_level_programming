#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: a pointer of type integer for thr array
 *
 * @size: the size of the array
 *
 * @cmp: a pointer for the function
 *
 * Return: the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp && array && size)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
			{
				return (index);
			}
		}
	}
	return (-1);
}
