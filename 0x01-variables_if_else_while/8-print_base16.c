#include <stdio.h>

/**
 * main - Main function
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
