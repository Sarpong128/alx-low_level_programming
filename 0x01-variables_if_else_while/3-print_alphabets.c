#include <stdio.h>

/**
 * main - main block
 * Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0 when sucessful
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
