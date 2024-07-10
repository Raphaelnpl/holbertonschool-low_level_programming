#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - grid
 * @grid: grid
 * @height: height 
 */

void free_grid(int **grid, int height)
{
        int a;

        for (a = 0; a < height; a++)
        {
                free(grid[a]);
        }

        free(grid);
}
