#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 0;


	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");

	return (0);
}
