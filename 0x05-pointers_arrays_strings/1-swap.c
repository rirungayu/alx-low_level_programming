#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps two integers
* @a: first int
* @b: second int
*Return: nothing
*/

void swap_int (int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
