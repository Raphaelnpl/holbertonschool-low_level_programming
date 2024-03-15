#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array given number of elements and size.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * Return: Pointer to the allocated memory or NULL if error.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int a;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	str = malloc(size * nmemb);
	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size * nmemb; a++)
	{
		str[a] = 0;
	}
	return (str);
}
