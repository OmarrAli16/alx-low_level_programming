#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @size: array size
 *
 * @c: intialization
 *
 * Return: a pointer to array or null if failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
