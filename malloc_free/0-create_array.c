#include <stdlib.h>
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal format
 * @buffer: pointer to the memory to print
 * @size: size of the memory to print
 *
 * Return: Nothing
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
