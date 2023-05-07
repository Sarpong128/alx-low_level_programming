#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *             at an index.
 *
 * @n: a pointer of an unsigned long int.
 * @index: index of the bit
 *
 * Return: 1 if successful, -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index);
	return (1);
}
