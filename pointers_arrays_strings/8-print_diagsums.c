#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 * Return : 0
 * @a : buck
 * @size : 
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_a = 0;
	int sum_b = 0;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_a += a[(size * i) +i];
			}
			if ((i +j) == (size - 1))
			{
				sum_b += a [(size * (i + 1)) - (i + 1)];
			}
		}
	}
	printf("%d, %d\n", sum_a, sum_b);
}

