#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - A finction that frees 2 dimendional grid
 * @grid: grid
 * @height: height of grid
 * Description: frees the memory
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
