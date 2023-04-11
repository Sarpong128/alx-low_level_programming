#include "main.h"

/**
 * get_endianness - it checks the endiannes
 *
 * Return: 0 if big endian, 1 if little endian.
 */


int get_endianness(void)
{
	char *c;
	unsigned int a;

	a = 1;
	c = (char *) &a;

	return ((int)*c);
}
