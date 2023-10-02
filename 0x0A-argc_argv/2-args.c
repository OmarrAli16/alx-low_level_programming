#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: integer for num of arguments
 *
 * @argv: char for array
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
