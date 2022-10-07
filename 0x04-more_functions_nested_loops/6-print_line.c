#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line of ___
 * @n: number of _ to print
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
