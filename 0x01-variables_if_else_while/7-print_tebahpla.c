#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: 0 (suceess)
 */

int main(void)
{
int s = 97, e = 122;

while
(e >= s)
{
putchar(e);
e--;
}
putchar('\n');
return (0);
}
