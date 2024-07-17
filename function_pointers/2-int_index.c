#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}
	return (-1);
}
