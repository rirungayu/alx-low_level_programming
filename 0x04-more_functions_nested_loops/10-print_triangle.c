#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle shape
 * @size: triangle height
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int rows = 0;

	if(size > 0)
	{
	while (rows < size)
	{
		int spaces = size;

		while (spaces > rows)
		{
			_putchar(' ');
			spaces--;
		}

		int hashes = 0;

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
