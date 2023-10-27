#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - gets the numb of bits that would be flipped
 *
 * @n: integer for first number
 *
 * @m: integer for second number
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int itr;
	unsigned long int x_orv;

	itr = 0;
	x_orv = n ^ m;
	while (x_orv > 0)
	{
		itr = itr + (x_orv & 1);
		x_orv >>= 1;
	}
	return (itr);
}
