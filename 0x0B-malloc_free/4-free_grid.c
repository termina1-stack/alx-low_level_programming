#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function that frees up a 2 dimensional grid
  * @grid: double pointer to be freed
  * @height: grid height
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
