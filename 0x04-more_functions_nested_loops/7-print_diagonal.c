#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a line of \ characters
 * @n: number of \ to print
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
	}
}



