#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - a function that returns pointer to a 2d array of int
 *
 * @width: integer for the width size
 *
 * @height: integer for the height size
 *
 * Return: the final result or null for failure
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **matr;

	matr = (int **)malloc(sizeof(*matr) * height)
	if (height <= 0 || width <= 0 || matr == 0)
	{
		return (0);
	}
	else if
	{
		for (; i < height; i++)
		{
			matr[i] = (int *)malloc(sizeof(**matr) * width);
			if (matr[i] == 0)
			{
				while (i--)
				{
					free(matr[i]);
				}
				free(matr);
				return (0);
			}
			for (; j < width; j++)
			{
				matr[i][j] = 0;
			}
		}
	}
	return (matr);
}
