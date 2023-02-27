#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that print n elements of an integer
 * @n: number of element
 * @a: arrays
 * Return: input
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}
