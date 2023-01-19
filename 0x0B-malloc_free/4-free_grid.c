#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a dimensional grid
 * @grid: grid to be freed
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int k;

	if (height <= 0 || grid == NULL)
		return;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
