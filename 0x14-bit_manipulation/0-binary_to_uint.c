#include "main.h"

/**
 * binary_to_uint - Convertsa binary number to unsigned int
 *
 * @b: pointer string containing the binary number
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}

	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	while (b[i] != '\0')
	{
		num <<= 1;

		if (b[i] == '1')
		{
			num = num + 1;
		}
		i++;
	}
	return (num);
}
