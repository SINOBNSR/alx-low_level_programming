#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array
 * @grid: array to be freed
 * @height: height of the array (columns)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
