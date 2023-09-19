#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int pp;
	int add;

	srand(time(NULL));
	while (add <= 2645)
	{
		pp = rand() % 128;
		add = add + pp;
		putchar(pp);
	}
	putchar(2772 - add);
	return (0);
}
