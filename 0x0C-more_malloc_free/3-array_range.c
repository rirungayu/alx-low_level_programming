#include "main.h"
#include <stdlib.h>

/**
* array_range - fills array from range
* @min: start value
* @max: end value
* Return: pointer to new array
*/

int *array_range(int min, int max)
{
int *arr;
int i = 0;

if (min > max)
return NULL;
arr = malloc(sizeof(int) * (max - min +1));
if (arr == NULL)
return NULL;

while (min != max)
{
arr[i] = min;
min++;
i++;
}

return (arr);
}
