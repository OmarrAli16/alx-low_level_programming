#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: commandline argu
 *
 * @argv: a char pointer for array
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
