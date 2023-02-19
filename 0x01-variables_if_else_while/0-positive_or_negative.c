#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assign a random number to variable
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = n % 10;

	printf("last digit of %d is ", n);

		if (lastdgt > 5)
		{
			printf("last digit of %d is %d and is greater than 5\n", n, lastdgt);
		}
		else if (lastdgt == 0)
		{
			printf("last digit of %d is %d and is 0\n", n, lastdtg);
		}
		else (lastdgt < 6 && lastdgt != 0)
		{
			printf("last digit of %d is %d and less than 6 and not 0\n", n, lastdgt);
		}

		return (0);
}
