#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j;
	int max = 15;
	int rows = 10;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < max; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
