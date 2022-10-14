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

while (src[i] != '\0'){
dest[i] = src[i];
i++;
}
dest[i + 1] = '\0';

return (dest);
}
