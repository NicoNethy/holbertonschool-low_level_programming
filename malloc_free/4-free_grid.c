#include "main.h"

/**
 * free_grid - this is the function
 * @grid: the griddy
 * @height: the height once again
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
