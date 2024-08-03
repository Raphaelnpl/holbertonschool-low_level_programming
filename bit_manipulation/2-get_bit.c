#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be examined
 * @index: the index, starting from 0, of the bit to get
 *
 * Return: the value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);

	return ((n >> index) & 1);
}
