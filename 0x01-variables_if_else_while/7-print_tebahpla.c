#include <stdio.h>

/**
 * main - main block
 * Print the alphabet in reverse order in lowercase.
 * Return: 0 always successful
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
