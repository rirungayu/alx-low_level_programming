#include "main.h"

/**
 * reverse_array - reverses  an array
 * @a:  array to be reversed
 * @n: array length
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0;
int p;

	while (i < n - 1)
	{
		p = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = p;
		i++;
		n--;
	}
}
