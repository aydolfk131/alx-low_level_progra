#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - returns a pointer toba 2D array
 * @width: width of grid
 * @height: heightvofvgrid
 * Return: apointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **aab;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	aab = malloc(sizeof(int *) * height);

	if (aab == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		aab[x] = malloc(sizeof(int) * width);

		if (aab == NULL)
		{
			for (; x >= 0; x--)
				free(aab[x]);
			free(aab);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			aab[x][y] = 0;
	}
	return (aab);
}
