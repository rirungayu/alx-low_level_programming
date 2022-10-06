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

	while (rows < size)
	{
		int spaces = size;

		while (spaces > counter)
		{
			_putchar(' ');
			spaces--;
		}

		int hashes = 0;

		while (hashes < counter)
		{
			_putchar('#');
			hashes++;
		}
	_putchar('\n');
	counter++;
	}

}
