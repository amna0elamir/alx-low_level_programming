#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grid:memory to be freed
 * @height:rows
 *
 * Return:Nothing
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(grid[r]);
	free(grid);
}
