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
	int count_of_bytes1;
	int count_of_bytes2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	count_of_bytes1 = atoi(argv[1]);
	count_of_bytes2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit (99);
	}
	if (!count_of_bytes2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(count_of_bytes1, count_of_bytes2));
	return (0);
}
