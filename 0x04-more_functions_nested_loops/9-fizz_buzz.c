#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers from 1 - 100, by using also Fizz and Buzz
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz ");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FrizzBuzz ");
		else if (i == 100)
			printf("buzz ");
		else
			printf(" %d ", i);
	}
	printf("\n");
	return (0);
}
