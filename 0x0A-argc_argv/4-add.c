#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc:
 *
 * @argv:
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int addition;
	char *c;

	addition = 0;
	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < 0 || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			addition = addition + atoi(argv[argc]);
		}
	}
	printf("%d\n", addition);
	return (0);
}
