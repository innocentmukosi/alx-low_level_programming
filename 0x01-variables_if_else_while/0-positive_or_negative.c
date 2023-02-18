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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("last digit of %d is positive\n", n);
		else if (n == 0)
			printf("last digit of %d is zero\n", n);
		else
			printf("last digit of %d is negetive\n", n);
		return (0);
}
