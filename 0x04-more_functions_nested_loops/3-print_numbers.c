#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;
	int max = 10;

	for (i = 0; i < max; i++)
	{
		putchar(i + '0');
	}
	return (0);
}
