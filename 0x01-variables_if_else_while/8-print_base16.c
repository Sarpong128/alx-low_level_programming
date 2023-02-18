#include <stdio.h>

/**
 * main - main block
 * Prints all numbers of base 16
 * Return: 0 when successful
 */

int main(void)
{
	for (int i = 0; i < 16; i++)
	{
		printf("%x\n", i);
        }
	return 0;
}
