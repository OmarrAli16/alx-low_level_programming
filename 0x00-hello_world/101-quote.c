#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: A C program for printing without the use of printf and puts
 *
 * Return: 1 (fail)
*/
int main(void)
{
	int fd = 1;
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(fd, q, 55);
	return (1);
}
