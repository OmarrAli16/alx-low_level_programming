#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: printing of all the alphabets in lowercase
 *
 * Return : Always 0 (success)
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
