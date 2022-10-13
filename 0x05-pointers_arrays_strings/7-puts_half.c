#include "main.h"

/**
* puts_half - prints second half of the string
* @str: the string
* Return: nothing
*/

void puts_half(char *str);
{
int i = 0;
int start;

while (str[i] != '\0')
{
i++;    
}

start = i / 2;

while (start < i)
{
putchar(str[start]);
start++;
}

putchar('\n');  
}
