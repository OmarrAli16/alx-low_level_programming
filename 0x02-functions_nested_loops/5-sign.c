#include <stdio.h>
#include "main.h"

/**
 *print_sign - function that print the sign of number
 *
 * @n: takes the input of the function
 *
 * Return: 1 when it is +
 **/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
