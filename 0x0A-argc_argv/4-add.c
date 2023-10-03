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
	int numb;
	int i;

	i = 1;
	addition = 0;
	numb = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		i++;
		numb = atoi(argv[i]);
			if (atoi(argv[i]) != numb || numb <= 0)
				{
				fprintf(stderr, "Error\n");
				return (1);
				}
				addition = addition + numb;
				}
				printf("%d\n", addition);
				return (0);
				}
