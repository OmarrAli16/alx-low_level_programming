#include <stdio.h>
/**
  * main - entry point
  *
  * Description: computes the sum of numbers
  *
  * Return: always 0 (success)
  */

int main(void)
{
	int i, add;

	for (i = 0; i < 1024; i++)
		if (i % 5 == 0 || i % 3 == 0)
			add = add + i;
	printf("%d\n", add);
	return (0);
}
