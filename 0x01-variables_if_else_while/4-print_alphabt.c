#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char fi = 'a';

	while (fi <= 'z')
	{
		if (fi == 'q' || fi == 'e')
			fi++;
		putchar(fi);
		fi++
	}
	putchar('\n');

	return (0);
}
