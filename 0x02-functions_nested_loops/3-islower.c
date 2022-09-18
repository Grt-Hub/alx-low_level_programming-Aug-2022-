#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Description: checks for lowercase character
 *
 * @c: letter converted to ascci code
 *
 * Return: 1 if c is lowercase ,0 otherwise
 */

int _islower(int c)
{
	int i;

	i = c;
	if (i <= 122 && i >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
