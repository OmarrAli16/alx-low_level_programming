#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: the number of arguments
 *
 * @argv: the vector of argument
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int count_of_bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count_of_bytes = atoi(argv[1]);
	if (count_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char* ptr = (unsigned char*) &imp;

	for (i = 0; i < count_of_bytes; i++)
	{
		printf("%02x", ptr[i]);
	}
	printf("\n");
	return (0);
}
