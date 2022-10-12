#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int s, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		grid[s] = malloc(width * sizeof(int));
		if (grid[s] == NULL)
		{
			for (s = 0; s < height; s++)
				free(grid[s]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[s][j] = 0;
	}

	return (grid);
}
