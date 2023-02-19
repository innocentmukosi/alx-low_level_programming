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
	dig = n % 10;

	print("last digit of %d is ", n);

		if (dig > 5)
		{
			printf("%d is positive 5\n", dig);
		}
		else if (dig == 0)
		{
			printf("%d is zero 0\n", dig);
		}
		else
		{
			printf("%d is negetive if less than 6 and not 0\n", dig);
		}

		return (0);
}
