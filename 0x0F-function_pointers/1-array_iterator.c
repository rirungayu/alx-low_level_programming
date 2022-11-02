#include "function_pointers.h"

/**
* array_iterator - iterates an array
* @array: array to be iter
* @size: size of array
* @action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (action != NULL && array != NULL)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
