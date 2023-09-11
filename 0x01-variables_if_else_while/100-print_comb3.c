#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: print all the possible different combinations of two digits
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '8')
	{
		while (num2 <= '9')
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != '8' && num2 != '9')
				{
					putchar(' ');
					putchar(',');
				}
			}
		num2++;
		}
	num1++;
	num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
