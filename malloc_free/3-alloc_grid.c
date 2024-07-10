#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the grid, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int b, a, c;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (b = 0; b < height; b++)
	{
		p[b] = malloc(sizeof(int) * width);

		if (p[b] == NULL)
		{
			for (c = b; c >= 0; c--)
			{
				free(p[c]);
			}
			free(p);
			return (NULL);
		}
		for (a = 0; a < width; a++)
		{
			p[b][a] = 0;
		}
	}

	return (p);
}
