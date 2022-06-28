#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - frees the two dimen function
 * @grid: grid
 * @height: height of the grid
 *
 * Return: int
 */
void free_grid(int **grid, __attribute__((unused))int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
