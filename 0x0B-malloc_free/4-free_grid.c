#include <stdlib.h>

/**
 * free_grid - that frees a 2 dimensional grid
 *@grid: 2 dimensional grid
 *@height: grid height
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}

