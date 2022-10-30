#include <stdlib.h>
#include "main.h"


/**
* _calloc - allocates memory for an array
* nmemb: no of elements
* size: no of bytes each
* Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
return NULL;

arr = malloc(size * nmemb);

if (arr == NULL)
return NULL;

while (i < nmemb * size)
{
arr[i] = '\0';
i++;
}

return ((void *)arr);
}
