#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: source string
 * @s2: accepted string
 * Return: number of bytes in unit segment
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
