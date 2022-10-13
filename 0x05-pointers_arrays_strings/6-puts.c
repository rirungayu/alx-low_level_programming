#include "main.h"

/**
* puts2 - prints every other character
* @s: string of characters
* Return: nothing
*/

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}
putchar('\n');
}
