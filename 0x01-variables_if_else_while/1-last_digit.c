#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int 'last';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdgt = n % 10;

	if (lastdgt > 5)
	{
		printf("lastdgt of '%d' is %d and is greater than 5\n", n, lastdgt);
	}
	else if (lastdgt == 0)
	{
		printf("lastdgt of '%d' is %d and is 0\n" n, lastdgt);
	}
	else if (lastdgt < 6)
	{
		printf("lastdgt of '%d' is %d and is less than 6 and not 0\n", n, lastdgt);
	}
	return (0);
}
