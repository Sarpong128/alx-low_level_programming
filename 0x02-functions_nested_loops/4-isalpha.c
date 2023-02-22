#include "main.h"

/**
* main - Determines alphabetic characters
* @c: Character to be evaluated
*
* This function uses the ASCII code to determine
* the letter of the alphabet
* Return: 0 if successful
*/
int _isalpha(int c)
{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
