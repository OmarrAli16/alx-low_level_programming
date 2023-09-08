#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char fi = 'a';

	while (fi <= 'z')
	{
		putchar(fi);
		fi++;
	}
	putchar('\n');
	return (0);
}
