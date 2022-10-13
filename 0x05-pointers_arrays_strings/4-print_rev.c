#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: the string
8 Return: nothing
*/

void print_rev(char *s)
{
int i = strlen(s) - 1;

while(i >= 0)
{
putchar(s[i]);
i--;
}
}
