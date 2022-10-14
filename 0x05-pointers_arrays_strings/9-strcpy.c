#include "main.h"

/**
* _strcpy - copies a string
* @src: source string
* @dest: destination string
* Return: nothing
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
int len = 0;

if (src[0] == '\0')
{
dest[0] = '\0'; 
return dest;
}
while (src[len] != '\0')
{
len++;
}
len += 1;

while (i < len)
{
dest[i] = src[i];
i++;
}

return (dest);
}
