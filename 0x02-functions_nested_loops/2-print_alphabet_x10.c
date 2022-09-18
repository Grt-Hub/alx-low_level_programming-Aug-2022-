#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times
 *
 * Description: prints the alphabet in lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char l;

	i = 0;
	while (i < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		i++;
		_putchar('\n');
	}
}
