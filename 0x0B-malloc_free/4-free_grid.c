#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid prevoiusly created
 * @grid: two dimensional grid
 * @height: height of grid
 *
 * Return: 0 (Success)
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
