#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - gets the natural sqrt of a number
 * func - a function to get square root
 * @n: input integer
 * @v: value square root
 * Return: the value
 */

int func(int n, int v);
int _sqrt_recursion(int n)
{
	return (func(n, 1));
}

int func(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (func(n, v + 1));
	}
	else
		return (-1);
}
