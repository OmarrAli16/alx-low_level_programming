#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	while (num1 <= 7)
	{
		num2 = 0;
		while (num2 <= 8)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				if (num1 != num2 && num2 != num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}


