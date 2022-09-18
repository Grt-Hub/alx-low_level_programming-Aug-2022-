#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: number that will be checked
 *
 * Return:	1 if n is greater than zero
 *		0 if n is zero
 *		-1 if n is less than zero
 */

int print_sign(int n)
{
	int i;

	i = n;
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
