#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of bit to 0
 *
 * @n: an integer for a bit pointer
 *
 * @index: integer index
 *
 * Return: 1 if success else 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	if (*n & 1L << index)
	{
		*n = *n ^ 1L << index;
	}
	return (1);
}
