#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int size_str;
	char *s;

	if (str == 0)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	size_str = i;
	s = malloc(size_str * sizeof(char) + 1);

	if (s == 0)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
