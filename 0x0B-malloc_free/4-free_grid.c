#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that effects the 2 dimensional grid previously created.
 *
 * @grid: array thats effected
 * @height: height of the array
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
		free(grid[s]);
	free(grid);
}
