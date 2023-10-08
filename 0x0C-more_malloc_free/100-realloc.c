#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block
 *
 * @ptr: a pointer for memory allocation
 *
 * @old_size: the size of the present allocated memory
 *
 * @new_size: size of the new memory to be allocated
 *
 * Return: res
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *res;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		res = malloc(new_size);
		if (res == NULL)
		{
			return (NULL);
		}
		return (res);
	}
	if (new_size > old_size)
	{
		res = malloc(new_size);
		if (res == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)res + i) = *((char *)ptr + i);
		}
		free(ptr);

	}
	return (res);
}
