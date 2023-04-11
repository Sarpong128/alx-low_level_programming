#include "main.h"

/**
 * set_bit - Sets the value of the bit at a given index.
 *
 * @n: a pointer to th bit
 * @index: the set value
 *
 * Return: 1 when success, -1 when error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l_shift;
	const int BITS_PER_BYTE = 8;

	if (index > (sizeof(unsigned long int) * BITS_PER_BYTE - 1))
	{
		return (-1);
	}

	l_shift = 1 << index;

	*n = *n | l_shift;
	return (1);
}
