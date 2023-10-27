#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - a funtion that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned long int num;

	num = 1;
	return (*(char*)&n);
}
