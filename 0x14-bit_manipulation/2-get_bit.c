#include "main.h"

/**
 * get_bit - returns the value of a bit
 *
 * @n: number of bit
 * @index: index at which to ccheck bit.
 *
 * Return: the bit value or -1 if an error occurs
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