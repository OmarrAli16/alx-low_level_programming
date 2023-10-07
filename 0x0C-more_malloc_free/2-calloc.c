#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: an array of elements
 *
 * @size: integer for indicating size
 *
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}
	result = malloc(sizeof(int) * nmemb);

	if (result == NULL)
	{
		return (0);
	}
	 memset(result, 0, (size_t)nmemb * size);
	 return (result);
}
