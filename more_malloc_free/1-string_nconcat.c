#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -
 * @s1:
 * @s2:
 * @n:
 * Return:
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	
	if (n >= b)
	{
		n = b;
	}
	
	else
	{
		b = n;
	}
	ptr = malloc(sizeof(char) * (a + b) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	
	for (d = 0; d < b; d++, c++)
	{
		ptr[c] = s2[d];
	}
	
	ptr[c] = '\0';
	return (ptr);
}
