#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;
	int max = 10;

	for (i = 0; i < max; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
