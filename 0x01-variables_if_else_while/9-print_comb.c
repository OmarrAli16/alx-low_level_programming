#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
