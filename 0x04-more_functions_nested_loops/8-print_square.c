#include "main.h"

/**
 * print_square - function that prints a square with the character '#'
 * @size: the size of the square to print (an integer)
 *
 * Return: void
 */

void print_square(int size)
{
	int line, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < size; line++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
