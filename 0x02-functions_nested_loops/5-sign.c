#include "main.h"

/**
* print_sign - Determines if number is signed
* @n: Integer number to be evaluated
*
* Description: This function prints the sign of a number
*Return: 1 (> 0) , 0 (== 0) or -1 (< 0)
*/
int print_sign(int n)
{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
}
