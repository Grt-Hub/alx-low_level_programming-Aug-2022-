#include <stdio.h>

/**
 * main - Main function
 *
 * Desciption: prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
