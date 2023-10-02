#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: integer
 *
 * @argv: list char
 *
 * Return: always 0 (success)
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[argc - 1]);
	return (0);
}
