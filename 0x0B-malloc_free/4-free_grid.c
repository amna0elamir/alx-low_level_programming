#include "main.h"

/**
 * * free_grid - frees a 2d array
 * *@grid:memory to be freed
 * *@height:rows
 * *Return:returns Nothing
 * */
void free_grid(int **grid, int height)
{
	int r;
	
	for (r = 0; r < height; i++)
		free(grid[r]);
	free(grid);
}
