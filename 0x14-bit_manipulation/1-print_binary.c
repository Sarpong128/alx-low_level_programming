#include "main.h"

/**
 * print_binary - prints a number in binary
 *
 * @n: number to be printed
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int div;
	char m;

	div = 1UL << (sizeof(unsigned long int) * 8 - 1);
	m = 0;

	while (div != 0)
	{
		if (n & div)
		{
			m = 1;
			_putchar('1');
		}
		else if (m)
		{
			_putchar('0');
		}
		div >>= 1;
	}

	if (!m)
	{
		_putchar('0');
	}
}
