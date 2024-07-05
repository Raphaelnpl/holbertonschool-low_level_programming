#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_a = 0;
	int sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_a += a[(size * i) + i];
		sum_b += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum_a, sum_b);
}
