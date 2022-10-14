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

while (i < 500)
{
dest[i] = src[i];
i++;
if (src[i] != '\0')
break;
}

return (dest);
}
