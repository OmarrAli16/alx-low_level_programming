#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - a function that gets the value of a bit
 *
 * @n: integer represents a bit
 *
 * @index: integer for the index
 *
 * Return: value of the bit index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
