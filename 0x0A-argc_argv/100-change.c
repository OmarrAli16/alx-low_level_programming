#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc:
 *
 * @argv:
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int coins[] = {25, 10, 5, 2, 1};
		int min_coin = 0;
		int total = atoi(argv[1]);
		int i;

		i = 0;
		while (i < 5)
		{
			if (total >= coins[i])
			{
				min_coin = min_coin + total / coins[i];
				total = total % coins[i];
				if (total % coins[i] == 0)
				{
					break;
				}
			}
		}
	printf("%d\n", min_coin);
	}
	return (0);
}
