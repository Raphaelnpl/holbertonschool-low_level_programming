#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal format
 * @buffer: pointer to the memory to print
 * @size: size of the memory to print
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size){
	unsigned int i;

	i = 0;
	while (i < size)
	{
	if (i % 10)
	printf(" ");
	if (!(i % 10) && i)
	printf("\n");
	printf("0x%02x", buffer[i]);
	i++;
}
	printf("\n");
}

int main(void)
{
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * 98);
	if (buffer == 0)
	{
		printf("Failed to allocate memory\n");
		 return (1);
	}
	for (int i = 0; i < 98; i++)
		{
			buffer[i] = 'H';
		}

		simple_print_buffer(buffer, 98);

		free(buffer);

		return (0);
}
