#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *              to get from another number
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	num_bits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			num_bits++;
		}
		n >>= 1;
		m >>= 1;
	}

	return (num_bits);
}
