#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0
 * Return: 0 when successful
 */

int main(void)
{
	int  x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
