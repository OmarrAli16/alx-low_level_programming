#include <stdio.h>
#include "main.h"

/**
 * if_prime - a function that checks if num is prime or not
 *
 * is_prime_number - a function for prime numbers
 *
 * @n:input integer
 *
 * @other: integer intialized with the first prime number
 *
 * Return: 1 if the number is prime
 */

int if_prime(int n, int other);
int is_prime_number(int n)
{
	return (if_prime(n, 2));
}

int if_prime(int n, int other)
{
	if (other >= n && n > 2)
	{
		return (1);
	}
	else if (n % other == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (if_prime(n, other + 1));
				}
}
