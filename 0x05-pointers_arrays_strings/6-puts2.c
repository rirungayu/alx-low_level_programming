#include "main.h"

/**
* puts2 - prints every other character
* @str: string of characters
* Return: nothing
*/

void puts2(char *str)
{
int i = 0;
int len = 0;

while (str[i] != '\0')
{
i++;
}

while (len < i)
{
_putchar(str[len]);
len += 2;
}

_putchar('\n');
}
