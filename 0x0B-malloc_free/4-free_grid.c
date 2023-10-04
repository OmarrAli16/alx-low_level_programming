#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2d grid
 *
 * @grid: integer specifing the grid
 *
 * @height: integer specifing the height
 */

void free_grid(int **grid, int height)
{
	int freee;

	for (freee = 0; freee < height; freee++)
	{
		free(grid[freee]);
	}
	free(grid);
}
