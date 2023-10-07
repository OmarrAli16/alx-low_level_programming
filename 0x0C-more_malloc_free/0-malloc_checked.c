#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocated memory using malloc
 *
 * @b: integer variable
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
