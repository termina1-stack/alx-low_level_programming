#include "main.h"

/**
  * alloc_grid - function that returns pointer to 2 dimensional integer array
  * @width: width
  * @height: height
  * Return: Pointer to new grid, else NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **newGrid;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	newGrid = malloc(height * sizeof(*newGrid));
	if (newGrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newGrid[i] = malloc(width * sizeof(**newGrid));
		if (newGrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(newGrid[i]);
			free(newGrid);
			return (NULL);

		}
		for (j = 0; j < width; j++)
			newGrid[i][j] = 0;
	}
	return (newGrid);
}
