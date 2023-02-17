#include <stdio.h>
/**
 * main - a program that print various computer compiler types
 * Return o (success)
 */
int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;

printf("Size of a char: %zu bytes\n", (unsigned long)sizeof(1));	
printf("Size of a int: %zu bytes\n", (unsigned long)sizeof(4));
printf("Size of a long int: %zu bytes\n", (unsigned long)sizeof(4));
printf("Size of a long long int: %zu bytes\n", (unsigned long)sizeof(8));
printf("Size of a float: %zu bytes\n", (unsigned long)sizeof(4));
return (0);
}
