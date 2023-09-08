#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: printing the alphabets in lowercase
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	char first = 'a';

	for (first ; first <= 'z' ; first++)
	{
		putchar(first);
	}
	putchar('\n');
	return (0);
}
