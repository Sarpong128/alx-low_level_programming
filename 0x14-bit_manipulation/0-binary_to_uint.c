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
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) | (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
