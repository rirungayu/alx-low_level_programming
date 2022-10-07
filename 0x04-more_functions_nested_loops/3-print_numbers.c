#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;
	int max = 10;

	for (i = 0; i < max; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
