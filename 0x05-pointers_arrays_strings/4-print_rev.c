#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: the string
* Return: nothing
*/

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

while (i >= 0)
{
if (s[i] != '\0')
_putchar(s[i]);
i--;
}

_putchar('\n');
}
