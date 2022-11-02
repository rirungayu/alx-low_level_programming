#include "function_pointers.h"

/**
* int_index - returns index of element where cmp(i) != 0
* @array: array to be searched
* @size: size of the array
* @cmp: pointer to function
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
return (-1);

if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
}

return (-1);
}
