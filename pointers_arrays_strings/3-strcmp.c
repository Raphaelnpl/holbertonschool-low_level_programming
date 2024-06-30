#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Difference between the first non-matching characters
 *         (s1[i] - s2[i]), or 0 if the strings are identical.
 */
int _strcmp(char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 != '\0')
	{
		return (*s1);
	}
	else if (*s2 != '\0')
	{
		return (-*s2);
	}

	return (0);
}
