#include "main.h"

/**
* print_alphabet - Entry point
* Description - In lowercase, followed by a new line
* Return: void
*/

void print_alphabet(void)
{
char letter;

for (letter = 'A'; letter <= 'Z'; letter++)
{
_putchar(letter);
}
_putchar('n');
}
