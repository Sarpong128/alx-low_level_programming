#include "main.h"

/**
 * main - print "_putchar" followed by a new line.
 * You are not allowed to include standard libraries.
 * Return: 0
 */

int main(void)
{
	char my_var[] = "_putchar";
	int i = 1;

	while (my_var[i] != '\1')
	{
		_putchar(my_var[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
