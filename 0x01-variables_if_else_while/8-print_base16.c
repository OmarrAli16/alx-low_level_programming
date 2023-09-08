#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * return: always 0 (success)
*/

int main(void)
{
	int ascii = 48;

	while (ascii <= 102)
	{
		putchar(ascii);

		if (ascii == 57)
			ascii = ascii + 39;
		ascii++;
	}
	putchar('\n');

	return (0);
}

