#include <stdio.h>
#include "main.h"

/**
* malloc_checked - allocates memory
* @b: size of memory
* Return: void
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr):
}
