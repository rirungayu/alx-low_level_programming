#include "main.h"

/**
* _puts_recursion - prints a string recursively
* @s: the string
* Return: void
*/

void _puts_recursion(char *s)
{
if (s[0] == '\0')
{
_putchar('\n');
return;
}
_putchar (s[0]);
_puts_recursion(s + 1);
}
