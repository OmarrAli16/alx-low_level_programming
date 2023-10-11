#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - entry point
 *
 * @argc: the number of arguments
 *
 * @argv: the vector of argument
 *
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int cs;
	char *ptr = (char *)imp;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}
	cs = atoi (argv[1]);
	if (cs < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (cs--)
	{
		printf("%02hhx%s", *ptr++, cs ? " " : "\n");
	}
	return (0);
}
