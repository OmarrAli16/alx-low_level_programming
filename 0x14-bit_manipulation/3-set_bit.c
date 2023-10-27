#include <stdio.h>
#include <stdlib.h>
#include "main"

/**
 * set_bit - a function to set the value of bit to 1
 *
 * @n: integer pointer to bit
 * 
 * @index: integer for representing index
 *
 * Return: if success return 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n != 1L << index);
}
