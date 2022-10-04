#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees 2 dimensional grid previously created
 * @grid: Grid to free
 * @height: Height of grid to free
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
