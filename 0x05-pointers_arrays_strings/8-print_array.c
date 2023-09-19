#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 *
 * @a: input integer 1
 *
 * @n: input integer 2
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	i++;
	}
	printf("\n");
}
