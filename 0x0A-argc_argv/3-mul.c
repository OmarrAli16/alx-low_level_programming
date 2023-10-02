#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: commandline arguments
 *
 * @argv: char array
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int addition;

	if (argc == 3)
	{
		addition = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n",addition);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
