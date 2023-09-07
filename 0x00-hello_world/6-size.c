#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program for printing the size of data
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %li byte(s)\n", sizeof(char));
	printf("size of a int: %li byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}
