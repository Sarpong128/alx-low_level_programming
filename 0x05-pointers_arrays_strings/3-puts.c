#include "main.h"
/**
 * _puts - print a string followed by a new line
 * @str: string
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
