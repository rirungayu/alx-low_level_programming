#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory, terminate process if malloc fails
* @b: the unsigned int
* Return: void pointer to new memory or exit with 98
*/

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);
return (p);
}


