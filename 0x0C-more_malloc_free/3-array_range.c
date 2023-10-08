#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of int
 *
 * @min:integer for min value
 *
 * @max: array for max value
 *
 * Return: a newly created array
 */

int *array_range(int min, int max)
{
	int count_elem;
	int i;
	int *result;

	if (min > max)
	{
		return (NULL);
	}
	count_elem = max - min + 1;
	result = (int *)malloc(sizeof(int) * count_elem);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count_elem; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
