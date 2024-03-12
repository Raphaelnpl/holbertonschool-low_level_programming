#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - 
 * @s1: 
 * @s2: 
 * Return: 
 */

char *str_concat(char *s1, char *s2)
{
	int i, b, x, z, limit;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	s = malloc((i * sizeof(*s1)) + (b * sizeof(*s2)) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	limit = b;

	for (z = 0; z <= limit; z++, x++)
	{
		s[x] = s2[z];
	}

	return (s);
}
