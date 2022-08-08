#include "main.h"

/**
 * free_grid - memory rm
 * @grid: grid
 * @height: height
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i;

		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
}
