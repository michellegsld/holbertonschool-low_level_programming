#include "holberton.h"

/**
 * free_grid - frees a 2D grid
 * @grid: The pointer to the grid
 * @height: The height of the array
 */
void free_grid(int **grid, int height)
{
	free(grid);
}
