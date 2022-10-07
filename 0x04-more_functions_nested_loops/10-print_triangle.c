#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle shape
 * @size: triangle height
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int rows = 0;
	int hashes;
	int spaces;

	if (size > 0)
	{
	while (rows < size)
	{
		spaces = size;

		while (spaces > rows)
		{
			_putchar(' ');
			spaces--;
		}

		hashes = 0;

		while (hashes < rows)
		{
			_putchar('#');
			hashes++;
		}
	_putchar('\n');
	rows++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
