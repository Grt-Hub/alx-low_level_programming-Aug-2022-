#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: program that prints the last
 * digit of a random number and compare it to 5
 *
 * Return: Always 0
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * The last digit of a number equals this
	 * number modulo 10
	 */
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
