#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: ascii code of the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	int i;

	i = c;
	if (i <= 122 && i >= 97)
	{
		return (1);
	}
	else if (i <= 90 && i >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
