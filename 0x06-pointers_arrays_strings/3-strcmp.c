#include "main.h"

/**
 * _strcmp - compare two string values
 * @s1: char
 * @s2: char
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[1] == s2[i])
{
if (s1[1] == '\0')
{
return (0);
}
i++;
}
return (s1[1] - s2[i]);
}
