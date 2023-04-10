#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number to get the bit from.
 * @index: The index of the bit to get (starting from 0).
 *
 * Return: The value of the bit at index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
