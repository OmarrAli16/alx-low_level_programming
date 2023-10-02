#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value
 *
 * @num: is the inserted integer
 *
 * Return: absolute value of the input number.
 */
int _abs(int num)
{
	if (num < 0)
		num = -1 * num;
	return (num);
}
