#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n >= b)
		n = b;

	ptr = malloc(sizeof(char) * (a + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		ptr[c] = s1[c];
	for (b = 0; b < n; b++, c++)
		ptr[c] = s2[b];
	ptr[c] = '\0';

	return (ptr);
}
